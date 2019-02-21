#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef HAVEN_OPENGL
#pragma warning(diable: 4072);
#endif

#ifdef HAVE_OPENGL
namespace ml
{
    const cahr* msg;
    msg = "Running...";
    cout << msg << endl;
}
#endif
