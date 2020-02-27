#ifndef HEADER
#define HEADER

#include <functional>
#include <ctime>
#include <iomanip>
#include <exception>
#include <map>
#include <queue>
#include <deque>
#include <sys/sysctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <net/route.h>
#include <sstream>
#include <ncurses.h>
#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "Monitor.hpp"
#include "Ncurses.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sys/types.h>
#include <sys/utsname.h>
# include <fcntl.h>
#include <math.h>
#include <unistd.h>
#include <cstdlib>
#include <stdlib.h>
# define ABS(x) ((2 * ((x) > 0) - 1) * (x))
# define STEPX(x) ((x == 0) ? 1 : (ABS((ABS(x) <= 1) + (1 / x) * (ABS(x) > 1))))
# define STEPY(x) (1/x == 0) ? 1 : (ABS((ABS(x) >= 1) + x * (ABS(x) < 1)))
# define MODT(x) (x < 0) ? (2 * M_PI + x) : x
#define WIDTH 670
#define HEIGHT 1100
#define	SPACETIME 5

#define PRINT(s) std::cout << (s) << std::endl
std::string exec(const char *cmd);

typedef struct s_vector
{
	float x;
	float y;
}		t_vector;
/*
void *mlx_ptr;
void *win_ptr;
void *img_ptr;
void *data_ptr;
*/
void	move_and_draw(t_vector old, t_vector n, int *data_ptr);
void line_to_image(t_vector s, t_vector e, int *data_ptr);



#endif
