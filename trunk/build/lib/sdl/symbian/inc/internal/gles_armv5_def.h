/*
    SDL - Simple DirectMedia Layer

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA


*/

struct ccontent_type
	{
	const char* const name;
	const int ord;
	};

const ccontent_type G_ordinals[] =
	{
		{"eglChooseConfig",1},
		{"eglCopyBuffers",2},
		{"eglCreateContext",3},
		{"eglCreatePbufferSurface",4},
		{"eglCreatePixmapSurface",5},
		{"eglCreateWindowSurface",6},
		{"eglDestroyContext",7},
		{"eglDestroySurface",8},
		{"eglGetConfigAttrib",9},
		{"eglGetConfigs",10},
		{"eglGetCurrentContext",11},
		{"eglGetCurrentDisplay",12},
		{"eglGetCurrentSurface",13},
		{"eglGetDisplay",14},
		{"eglGetError",15},
		{"eglGetProcAddress",16},
		{"eglInitialize",17},
		{"eglMakeCurrent",18},
		{"eglQueryContext",19},
		{"eglQueryString",20},
		{"eglQuerySurface",21},
		{"eglSwapBuffers",22},
		{"eglTerminate",23},
		{"eglWaitGL",24},
		{"eglWaitNative",25},
		{"glActiveTexture",26},
		{"glAlphaFunc",27},
		{"glAlphaFuncx",28},
		{"glBindTexture",29},
		{"glBlendFunc",30},
		{"glClear",31},
		{"glClearColor",32},
		{"glClearColorx",33},
		{"glClearDepthf",34},
		{"glClearDepthx",35},
		{"glClearStencil",36},
		{"glClientActiveTexture",37},
		{"glColor4f",38},
		{"glColor4x",39},
		{"glColorMask",40},
		{"glColorPointer",41},
		{"glCompressedTexImage2D",42},
		{"glCompressedTexSubImage2D",43},
		{"glCopyTexImage2D",44},
		{"glCopyTexSubImage2D",45},
		{"glCullFace",46},
		{"glDeleteTextures",47},
		{"glDepthFunc",48},
		{"glDepthMask",49},
		{"glDepthRangef",50},
		{"glDepthRangex",51},
		{"glDisable",52},
		{"glDisableClientState",53},
		{"glDrawArrays",54},
		{"glDrawElements",55},
		{"glEnable",56},
		{"glEnableClientState",57},
		{"glFinish",58},
		{"glFlush",59},
		{"glFogf",60},
		{"glFogfv",61},
		{"glFogx",62},
		{"glFogxv",63},
		{"glFrontFace",64},
		{"glFrustumf",65},
		{"glFrustumx",66},
		{"glGenTextures",67},
		{"glGetError",68},
		{"glGetIntegerv",69},
		{"glGetString",70},
		{"glHint",71},
		{"glLightModelf",72},
		{"glLightModelfv",73},
		{"glLightModelx",74},
		{"glLightModelxv",75},
		{"glLightf",76},
		{"glLightfv",77},
		{"glLightx",78},
		{"glLightxv",79},
		{"glLineWidth",80},
		{"glLineWidthx",81},
		{"glLoadIdentity",82},
		{"glLoadMatrixf",83},
		{"glLoadMatrixx",84},
		{"glLogicOp",85},
		{"glMaterialf",86},
		{"glMaterialfv",87},
		{"glMaterialx",88},
		{"glMaterialxv",89},
		{"glMatrixMode",90},
		{"glMultMatrixf",91},
		{"glMultMatrixx",92},
		{"glMultiTexCoord4f",93},
		{"glMultiTexCoord4x",94},
		{"glNormal3f",95},
		{"glNormal3x",96},
		{"glNormalPointer",97},
		{"glOrthof",98},
		{"glOrthox",99},
		{"glPixelStorei",100},
		{"glPointSize",101},
		{"glPointSizex",102},
		{"glPolygonOffset",103},
		{"glPolygonOffsetx",104},
		{"glPopMatrix",105},
		{"glPushMatrix",106},
		{"glQueryMatrixxOES",107},
		{"glReadPixels",108},
		{"glRotatef",109},
		{"glRotatex",110},
		{"glSampleCoverage",111},
		{"glSampleCoveragex",112},
		{"glScalef",113},
		{"glScalex",114},
		{"glScissor",115},
		{"glShadeModel",116},
		{"glStencilFunc",117},
		{"glStencilMask",118},
		{"glStencilOp",119},
		{"glTexCoordPointer",120},
		{"glTexEnvf",121},
		{"glTexEnvfv",122},
		{"glTexEnvx",123},
		{"glTexEnvxv",124},
		{"glTexImage2D",125},
		{"glTexParameterf",126},
		{"glTexParameterx",127},
		{"glTexSubImage2D",128},
		{"glTranslatef",129},
		{"glTranslatex",130},
		{"glVertexPointer",131},
		{"glViewport",132},
		{"eglSwapInterval",133},
		{"glBindBuffer",134},
		{"glBufferData",135},
		{"glBufferSubData",136},
		{"glClipPlanef",137},
		{"glClipPlanex",138},
		{"glColor4ub",139},
		{"glDeleteBuffers",140},
		{"glGenBuffers",141},
		{"glGetBooleanv",142},
		{"glGetBufferParameteriv",143},
		{"glGetClipPlanef",144},
		{"glGetClipPlanex",145},
		{"glGetFixedv",146},
		{"glGetFloatv",147},
		{"glGetLightfv",148},
		{"glGetLightxv",149},
		{"glGetMaterialfv",150},
		{"glGetMaterialxv",151},
		{"glGetPointerv",152},
		{"glGetTexEnvfv",153},
		{"glGetTexEnviv",154},
		{"glGetTexEnvxv",155},
		{"glGetTexParameterfv",156},
		{"glGetTexParameteriv",157},
		{"glGetTexParameterxv",158},
		{"glIsBuffer",159},
		{"glIsEnabled",160},
		{"glIsTexture",161},
		{"glPointParameterf",162},
		{"glPointParameterfv",163},
		{"glPointParameterx",164},
		{"glPointParameterxv",165},
		{"glPointSizePointerOES",166},
		{"glTexEnvi",167},
		{"glTexEnviv",168},
		{"glTexParameterfv",169},
		{"glTexParameteri",170},
		{"glTexParameteriv",171},
		{"glTexParameterxv",172}	};

#define G_ordinals_count (sizeof( G_ordinals) / sizeof(ccontent_type))
