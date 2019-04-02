#include <stdio.h>
#include <X11/Xlib.h>

int main()
{
Display *d;
Window inwin; /* root window the pointer is in */
Window inchildwin; /* child win the pointer is in(terminal window) */
int rootx, rooty,old_cx=0,old_cy=0; /* relative to the "root" window; */
int childx, childy; /* relative to terminal */
Atom atom_type_prop; /* */
int actual_format; /* should be 32 after the call */
unsigned int mask; /* status of the buttons */
unsigned long n_items, bytes_after_ret;
Window *props; /* since we are interested just in the first value, which is
a Window id */

/* default DISPLAY */
d = XOpenDisplay(NULL);

/* ask for active window (no error check); the client must be freedesktop
compliant */
(void)XGetWindowProperty(d, DefaultRootWindow(d),
XInternAtom(d, "_NET_ACTIVE_WINDOW", True),
0, 1, False, AnyPropertyType,
&atom_type_prop, &actual_format,
&n_items, &bytes_after_ret, (unsigned char**)&props);

while(1)
{
XQueryPointer(d, props[0], &inwin, &inchildwin,
&rootx, &rooty, &childx, &childy, &mask);
if(rootx!=old_cx || rooty!=old_cy)
printf("relative to active window: %d,%d\n", rootx, rooty);
old_cx=rootx;
old_cy=rooty;
}

XFree(props); /* free mem */
(void)XCloseDisplay(d); /* and close the display */
return 0;
}
