CPPFLAGS=g++ -Werror -Wall -Wextra -I. -I${GIT}
INCLUDES=-L. -lgtest -lpthread
FOLDER=$(tr ':' ' ' | awk '{print $2}')

test:
	git submodule add -f ${GIT} 
	${CPPFLAGS} ${SUBJECT} ${INCLUDE}
	./a.out
	clean

clean:
	find . \(-name '*.o' -name '.gitmodules' -name 'a.out'\) -delete
	git rm -f ${GIT}
