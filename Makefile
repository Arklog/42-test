FOLDER=$(shell echo ${GIT} | tr '/' ' ' | awk '{print $$2}')
CPPFLAGS=g++ -Werror -Wall -Wextra -I. -I${FOLDER}
INCLUDES=-L. -lgtest -lpthread

all: | compile clean

compile:
	git submodule add -f ${GIT} 
	-${CPPFLAGS} ${SUBJECT}.cpp ${INCLUDES}
	-./a.out

clean:
	@-find . \(-name '*.o' -name '.gitmodules' -name 'a.out'\) -delete 2>>/dev/null || true
	@-git rm -f ${FOLDER} 2>>/dev/null || true
