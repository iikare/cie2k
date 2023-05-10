CXX=clang++
C=clang
LD=-fuse-ld=mold
CFLAGS=--std=c++20 -Wall -Wextra $(NONSTD)$(RELFLAGS)$(DEPDEF)

PREREQ_DIR=@mkdir -p $(@D)

SRCDIR=.
BUILDDIR=build
BINDIR=bin

NAME=$(addprefix $(BINDIR)/, cie2k_test)

SRCS=$(wildcard $(SRCDIR)/*.cc)#$(wildcard $(SRCDIR)/*/*.cc)
OBJS=$(patsubst $(SRCDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCS))

all:

	./gen/gen.sh
	@$(MAKE) --no-print-directory $(NAME)

	@echo
	@echo "running test suite"
	@echo

	@./bin/cie2k_test


re: clean
	@$(MAKE) --no-print-directory

$(NAME): $(OBJS) | $(@D)
	$(PREREQ_DIR)
	$(CXX) $(CFLAGSSTD) -o $(NAME) $(OBJS) $(LFLAGS)

$(OBJS): $(BUILDDIR)/%.o: $(SRCDIR)/%.cc
	$(PREREQ_DIR)
	$(CXX) $(CFLAGSSTD) -o $@ -c $<

clean:
	@echo
	@echo "cleaning old build files"
	@echo
	@$(MAKE) --no-print-directory cleanbuild
	@$(MAKE) --no-print-directory cleanexec

cleanbuild:
	rm -f build/*.o

cleanexec:
	rm -f $(NAME)

.PHONY: all clean

