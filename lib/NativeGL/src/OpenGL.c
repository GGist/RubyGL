#include "OpenGL.h"
#include "SDL.h"

void glActiveShaderProgram(GLuint pipeline, GLuint program) {
  typedef void (APIENTRY * GL_ActiveShaderProgram_Func)(GLuint, GLuint);
  static GL_ActiveShaderProgram_Func glActiveShaderProgram_ptr = NULL;

  if (glActiveShaderProgram_ptr == NULL) {
    glActiveShaderProgram_ptr = (GL_ActiveShaderProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glActiveShaderProgram_ptr(pipeline, program);
}

void glActiveTexture(GLenum texture) {
  typedef void (APIENTRY * GL_ActiveTexture_Func)(GLenum);
  static GL_ActiveTexture_Func glActiveTexture_ptr = NULL;

  if (glActiveTexture_ptr == NULL) {
    glActiveTexture_ptr = (GL_ActiveTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glActiveTexture_ptr(texture);
}

void glAttachShader(GLuint program, GLuint shader) {
  typedef void (APIENTRY * GL_AttachShader_Func)(GLuint, GLuint);
  static GL_AttachShader_Func glAttachShader_ptr = NULL;

  if (glAttachShader_ptr == NULL) {
    glAttachShader_ptr = (GL_AttachShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glAttachShader_ptr(program, shader);
}

void glBeginConditionalRender(GLuint id, GLenum mode) {
  typedef void (APIENTRY * GL_BeginConditionalRender_Func)(GLuint, GLenum);
  static GL_BeginConditionalRender_Func glBeginConditionalRender_ptr = NULL;

  if (glBeginConditionalRender_ptr == NULL) {
    glBeginConditionalRender_ptr = (GL_BeginConditionalRender_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBeginConditionalRender_ptr(id, mode);
}

void glBeginQuery(GLenum target, GLuint id) {
  typedef void (APIENTRY * GL_BeginQuery_Func)(GLenum, GLuint);
  static GL_BeginQuery_Func glBeginQuery_ptr = NULL;

  if (glBeginQuery_ptr == NULL) {
    glBeginQuery_ptr = (GL_BeginQuery_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBeginQuery_ptr(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) {
  typedef void (APIENTRY * GL_BeginQueryIndexed_Func)(GLenum, GLuint, GLuint);
  static GL_BeginQueryIndexed_Func glBeginQueryIndexed_ptr = NULL;

  if (glBeginQueryIndexed_ptr == NULL) {
    glBeginQueryIndexed_ptr = (GL_BeginQueryIndexed_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBeginQueryIndexed_ptr(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode) {
  typedef void (APIENTRY * GL_BeginTransformFeedback_Func)(GLenum);
  static GL_BeginTransformFeedback_Func glBeginTransformFeedback_ptr = NULL;

  if (glBeginTransformFeedback_ptr == NULL) {
    glBeginTransformFeedback_ptr = (GL_BeginTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBeginTransformFeedback_ptr(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) {
  typedef void (APIENTRY * GL_BindAttribLocation_Func)(GLuint, GLuint, const GLchar *);
  static GL_BindAttribLocation_Func glBindAttribLocation_ptr = NULL;

  if (glBindAttribLocation_ptr == NULL) {
    glBindAttribLocation_ptr = (GL_BindAttribLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindAttribLocation_ptr(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer) {
  typedef void (APIENTRY * GL_BindBuffer_Func)(GLenum, GLuint);
  static GL_BindBuffer_Func glBindBuffer_ptr = NULL;

  if (glBindBuffer_ptr == NULL) {
    glBindBuffer_ptr = (GL_BindBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindBuffer_ptr(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) {
  typedef void (APIENTRY * GL_BindBufferBase_Func)(GLenum, GLuint, GLuint);
  static GL_BindBufferBase_Func glBindBufferBase_ptr = NULL;

  if (glBindBufferBase_ptr == NULL) {
    glBindBufferBase_ptr = (GL_BindBufferBase_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindBufferBase_ptr(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
  typedef void (APIENTRY * GL_BindBufferRange_Func)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
  static GL_BindBufferRange_Func glBindBufferRange_ptr = NULL;

  if (glBindBufferRange_ptr == NULL) {
    glBindBufferRange_ptr = (GL_BindBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindBufferRange_ptr(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers) {
  typedef void (APIENTRY * GL_BindBuffersBase_Func)(GLenum, GLuint, GLsizei, const GLuint *);
  static GL_BindBuffersBase_Func glBindBuffersBase_ptr = NULL;

  if (glBindBuffersBase_ptr == NULL) {
    glBindBuffersBase_ptr = (GL_BindBuffersBase_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindBuffersBase_ptr(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes) {
  typedef void (APIENTRY * GL_BindBuffersRange_Func)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *);
  static GL_BindBuffersRange_Func glBindBuffersRange_ptr = NULL;

  if (glBindBuffersRange_ptr == NULL) {
    glBindBuffersRange_ptr = (GL_BindBuffersRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindBuffersRange_ptr(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name) {
  typedef void (APIENTRY * GL_BindFragDataLocation_Func)(GLuint, GLuint, const GLchar *);
  static GL_BindFragDataLocation_Func glBindFragDataLocation_ptr = NULL;

  if (glBindFragDataLocation_ptr == NULL) {
    glBindFragDataLocation_ptr = (GL_BindFragDataLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindFragDataLocation_ptr(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) {
  typedef void (APIENTRY * GL_BindFragDataLocationIndexed_Func)(GLuint, GLuint, GLuint, const GLchar *);
  static GL_BindFragDataLocationIndexed_Func glBindFragDataLocationIndexed_ptr = NULL;

  if (glBindFragDataLocationIndexed_ptr == NULL) {
    glBindFragDataLocationIndexed_ptr = (GL_BindFragDataLocationIndexed_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindFragDataLocationIndexed_ptr(program, colorNumber, index, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer) {
  typedef void (APIENTRY * GL_BindFramebuffer_Func)(GLenum, GLuint);
  static GL_BindFramebuffer_Func glBindFramebuffer_ptr = NULL;

  if (glBindFramebuffer_ptr == NULL) {
    glBindFramebuffer_ptr = (GL_BindFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindFramebuffer_ptr(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
  typedef void (APIENTRY * GL_BindImageTexture_Func)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum);
  static GL_BindImageTexture_Func glBindImageTexture_ptr = NULL;

  if (glBindImageTexture_ptr == NULL) {
    glBindImageTexture_ptr = (GL_BindImageTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindImageTexture_ptr(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures) {
  typedef void (APIENTRY * GL_BindImageTextures_Func)(GLuint, GLsizei, const GLuint *);
  static GL_BindImageTextures_Func glBindImageTextures_ptr = NULL;

  if (glBindImageTextures_ptr == NULL) {
    glBindImageTextures_ptr = (GL_BindImageTextures_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindImageTextures_ptr(first, count, textures);
}

void glBindProgramPipeline(GLuint pipeline) {
  typedef void (APIENTRY * GL_BindProgramPipeline_Func)(GLuint);
  static GL_BindProgramPipeline_Func glBindProgramPipeline_ptr = NULL;

  if (glBindProgramPipeline_ptr == NULL) {
    glBindProgramPipeline_ptr = (GL_BindProgramPipeline_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindProgramPipeline_ptr(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
  typedef void (APIENTRY * GL_BindRenderbuffer_Func)(GLenum, GLuint);
  static GL_BindRenderbuffer_Func glBindRenderbuffer_ptr = NULL;

  if (glBindRenderbuffer_ptr == NULL) {
    glBindRenderbuffer_ptr = (GL_BindRenderbuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindRenderbuffer_ptr(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler) {
  typedef void (APIENTRY * GL_BindSampler_Func)(GLuint, GLuint);
  static GL_BindSampler_Func glBindSampler_ptr = NULL;

  if (glBindSampler_ptr == NULL) {
    glBindSampler_ptr = (GL_BindSampler_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindSampler_ptr(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers) {
  typedef void (APIENTRY * GL_BindSamplers_Func)(GLuint, GLsizei, const GLuint *);
  static GL_BindSamplers_Func glBindSamplers_ptr = NULL;

  if (glBindSamplers_ptr == NULL) {
    glBindSamplers_ptr = (GL_BindSamplers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindSamplers_ptr(first, count, samplers);
}

void glBindTexture(GLenum target, GLuint texture) {
  typedef void (APIENTRY * GL_BindTexture_Func)(GLenum, GLuint);
  static GL_BindTexture_Func glBindTexture_ptr = NULL;

  if (glBindTexture_ptr == NULL) {
    glBindTexture_ptr = (GL_BindTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindTexture_ptr(target, texture);
}

void glBindTextureUnit(GLuint unit, GLuint texture) {
  typedef void (APIENTRY * GL_BindTextureUnit_Func)(GLuint, GLuint);
  static GL_BindTextureUnit_Func glBindTextureUnit_ptr = NULL;

  if (glBindTextureUnit_ptr == NULL) {
    glBindTextureUnit_ptr = (GL_BindTextureUnit_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindTextureUnit_ptr(unit, texture);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures) {
  typedef void (APIENTRY * GL_BindTextures_Func)(GLuint, GLsizei, const GLuint *);
  static GL_BindTextures_Func glBindTextures_ptr = NULL;

  if (glBindTextures_ptr == NULL) {
    glBindTextures_ptr = (GL_BindTextures_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindTextures_ptr(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id) {
  typedef void (APIENTRY * GL_BindTransformFeedback_Func)(GLenum, GLuint);
  static GL_BindTransformFeedback_Func glBindTransformFeedback_ptr = NULL;

  if (glBindTransformFeedback_ptr == NULL) {
    glBindTransformFeedback_ptr = (GL_BindTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindTransformFeedback_ptr(target, id);
}

void glBindVertexArray(GLuint array) {
  typedef void (APIENTRY * GL_BindVertexArray_Func)(GLuint);
  static GL_BindVertexArray_Func glBindVertexArray_ptr = NULL;

  if (glBindVertexArray_ptr == NULL) {
    glBindVertexArray_ptr = (GL_BindVertexArray_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindVertexArray_ptr(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
  typedef void (APIENTRY * GL_BindVertexBuffer_Func)(GLuint, GLuint, GLintptr, GLsizei);
  static GL_BindVertexBuffer_Func glBindVertexBuffer_ptr = NULL;

  if (glBindVertexBuffer_ptr == NULL) {
    glBindVertexBuffer_ptr = (GL_BindVertexBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindVertexBuffer_ptr(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) {
  typedef void (APIENTRY * GL_BindVertexBuffers_Func)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
  static GL_BindVertexBuffers_Func glBindVertexBuffers_ptr = NULL;

  if (glBindVertexBuffers_ptr == NULL) {
    glBindVertexBuffers_ptr = (GL_BindVertexBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBindVertexBuffers_ptr(first, count, buffers, offsets, strides);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
  typedef void (APIENTRY * GL_BlendColor_Func)(GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_BlendColor_Func glBlendColor_ptr = NULL;

  if (glBlendColor_ptr == NULL) {
    glBlendColor_ptr = (GL_BlendColor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendColor_ptr(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode) {
  typedef void (APIENTRY * GL_BlendEquation_Func)(GLenum);
  static GL_BlendEquation_Func glBlendEquation_ptr = NULL;

  if (glBlendEquation_ptr == NULL) {
    glBlendEquation_ptr = (GL_BlendEquation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendEquation_ptr(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
  typedef void (APIENTRY * GL_BlendEquationSeparate_Func)(GLenum, GLenum);
  static GL_BlendEquationSeparate_Func glBlendEquationSeparate_ptr = NULL;

  if (glBlendEquationSeparate_ptr == NULL) {
    glBlendEquationSeparate_ptr = (GL_BlendEquationSeparate_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendEquationSeparate_ptr(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
  typedef void (APIENTRY * GL_BlendEquationSeparatei_Func)(GLuint, GLenum, GLenum);
  static GL_BlendEquationSeparatei_Func glBlendEquationSeparatei_ptr = NULL;

  if (glBlendEquationSeparatei_ptr == NULL) {
    glBlendEquationSeparatei_ptr = (GL_BlendEquationSeparatei_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendEquationSeparatei_ptr(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode) {
  typedef void (APIENTRY * GL_BlendEquationi_Func)(GLuint, GLenum);
  static GL_BlendEquationi_Func glBlendEquationi_ptr = NULL;

  if (glBlendEquationi_ptr == NULL) {
    glBlendEquationi_ptr = (GL_BlendEquationi_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendEquationi_ptr(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor) {
  typedef void (APIENTRY * GL_BlendFunc_Func)(GLenum, GLenum);
  static GL_BlendFunc_Func glBlendFunc_ptr = NULL;

  if (glBlendFunc_ptr == NULL) {
    glBlendFunc_ptr = (GL_BlendFunc_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendFunc_ptr(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
  typedef void (APIENTRY * GL_BlendFuncSeparate_Func)(GLenum, GLenum, GLenum, GLenum);
  static GL_BlendFuncSeparate_Func glBlendFuncSeparate_ptr = NULL;

  if (glBlendFuncSeparate_ptr == NULL) {
    glBlendFuncSeparate_ptr = (GL_BlendFuncSeparate_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendFuncSeparate_ptr(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
  typedef void (APIENTRY * GL_BlendFuncSeparatei_Func)(GLuint, GLenum, GLenum, GLenum, GLenum);
  static GL_BlendFuncSeparatei_Func glBlendFuncSeparatei_ptr = NULL;

  if (glBlendFuncSeparatei_ptr == NULL) {
    glBlendFuncSeparatei_ptr = (GL_BlendFuncSeparatei_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendFuncSeparatei_ptr(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst) {
  typedef void (APIENTRY * GL_BlendFunci_Func)(GLuint, GLenum, GLenum);
  static GL_BlendFunci_Func glBlendFunci_ptr = NULL;

  if (glBlendFunci_ptr == NULL) {
    glBlendFunci_ptr = (GL_BlendFunci_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlendFunci_ptr(buf, src, dst);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
  typedef void (APIENTRY * GL_BlitFramebuffer_Func)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
  static GL_BlitFramebuffer_Func glBlitFramebuffer_ptr = NULL;

  if (glBlitFramebuffer_ptr == NULL) {
    glBlitFramebuffer_ptr = (GL_BlitFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlitFramebuffer_ptr(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
  typedef void (APIENTRY * GL_BlitNamedFramebuffer_Func)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
  static GL_BlitNamedFramebuffer_Func glBlitNamedFramebuffer_ptr = NULL;

  if (glBlitNamedFramebuffer_ptr == NULL) {
    glBlitNamedFramebuffer_ptr = (GL_BlitNamedFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBlitNamedFramebuffer_ptr(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage) {
  typedef void (APIENTRY * GL_BufferData_Func)(GLenum, GLsizeiptr, const void *, GLenum);
  static GL_BufferData_Func glBufferData_ptr = NULL;

  if (glBufferData_ptr == NULL) {
    glBufferData_ptr = (GL_BufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBufferData_ptr(target, size, data, usage);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags) {
  typedef void (APIENTRY * GL_BufferStorage_Func)(GLenum, GLsizeiptr, const void *, GLbitfield);
  static GL_BufferStorage_Func glBufferStorage_ptr = NULL;

  if (glBufferStorage_ptr == NULL) {
    glBufferStorage_ptr = (GL_BufferStorage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBufferStorage_ptr(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data) {
  typedef void (APIENTRY * GL_BufferSubData_Func)(GLenum, GLintptr, GLsizeiptr, const void *);
  static GL_BufferSubData_Func glBufferSubData_ptr = NULL;

  if (glBufferSubData_ptr == NULL) {
    glBufferSubData_ptr = (GL_BufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glBufferSubData_ptr(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target) {
  typedef GLenum (APIENTRY * GL_CheckFramebufferStatus_Func)(GLenum);
  static GL_CheckFramebufferStatus_Func glCheckFramebufferStatus_ptr = NULL;

  if (glCheckFramebufferStatus_ptr == NULL) {
    glCheckFramebufferStatus_ptr = (GL_CheckFramebufferStatus_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCheckFramebufferStatus_ptr(target);
}

GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target) {
  typedef GLenum (APIENTRY * GL_CheckNamedFramebufferStatus_Func)(GLuint, GLenum);
  static GL_CheckNamedFramebufferStatus_Func glCheckNamedFramebufferStatus_ptr = NULL;

  if (glCheckNamedFramebufferStatus_ptr == NULL) {
    glCheckNamedFramebufferStatus_ptr = (GL_CheckNamedFramebufferStatus_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCheckNamedFramebufferStatus_ptr(framebuffer, target);
}

void glClampColor(GLenum target, GLenum clamp) {
  typedef void (APIENTRY * GL_ClampColor_Func)(GLenum, GLenum);
  static GL_ClampColor_Func glClampColor_ptr = NULL;

  if (glClampColor_ptr == NULL) {
    glClampColor_ptr = (GL_ClampColor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClampColor_ptr(target, clamp);
}

void glClear(GLbitfield mask) {
  typedef void (APIENTRY * GL_Clear_Func)(GLbitfield);
  static GL_Clear_Func glClear_ptr = NULL;

  if (glClear_ptr == NULL) {
    glClear_ptr = (GL_Clear_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClear_ptr(mask);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearBufferData_Func)(GLenum, GLenum, GLenum, GLenum, const void *);
  static GL_ClearBufferData_Func glClearBufferData_ptr = NULL;

  if (glClearBufferData_ptr == NULL) {
    glClearBufferData_ptr = (GL_ClearBufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferData_ptr(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearBufferSubData_Func)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *);
  static GL_ClearBufferSubData_Func glClearBufferSubData_ptr = NULL;

  if (glClearBufferSubData_ptr == NULL) {
    glClearBufferSubData_ptr = (GL_ClearBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferSubData_ptr(target, internalformat, offset, size, format, type, data);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
  typedef void (APIENTRY * GL_ClearBufferfi_Func)(GLenum, GLint, GLfloat, GLint);
  static GL_ClearBufferfi_Func glClearBufferfi_ptr = NULL;

  if (glClearBufferfi_ptr == NULL) {
    glClearBufferfi_ptr = (GL_ClearBufferfi_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferfi_ptr(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value) {
  typedef void (APIENTRY * GL_ClearBufferfv_Func)(GLenum, GLint, const GLfloat *);
  static GL_ClearBufferfv_Func glClearBufferfv_ptr = NULL;

  if (glClearBufferfv_ptr == NULL) {
    glClearBufferfv_ptr = (GL_ClearBufferfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferfv_ptr(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value) {
  typedef void (APIENTRY * GL_ClearBufferiv_Func)(GLenum, GLint, const GLint *);
  static GL_ClearBufferiv_Func glClearBufferiv_ptr = NULL;

  if (glClearBufferiv_ptr == NULL) {
    glClearBufferiv_ptr = (GL_ClearBufferiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferiv_ptr(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value) {
  typedef void (APIENTRY * GL_ClearBufferuiv_Func)(GLenum, GLint, const GLuint *);
  static GL_ClearBufferuiv_Func glClearBufferuiv_ptr = NULL;

  if (glClearBufferuiv_ptr == NULL) {
    glClearBufferuiv_ptr = (GL_ClearBufferuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearBufferuiv_ptr(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
  typedef void (APIENTRY * GL_ClearColor_Func)(GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_ClearColor_Func glClearColor_ptr = NULL;

  if (glClearColor_ptr == NULL) {
    glClearColor_ptr = (GL_ClearColor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearColor_ptr(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth) {
  typedef void (APIENTRY * GL_ClearDepth_Func)(GLdouble);
  static GL_ClearDepth_Func glClearDepth_ptr = NULL;

  if (glClearDepth_ptr == NULL) {
    glClearDepth_ptr = (GL_ClearDepth_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearDepth_ptr(depth);
}

void glClearDepthf(GLfloat d) {
  typedef void (APIENTRY * GL_ClearDepthf_Func)(GLfloat);
  static GL_ClearDepthf_Func glClearDepthf_ptr = NULL;

  if (glClearDepthf_ptr == NULL) {
    glClearDepthf_ptr = (GL_ClearDepthf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearDepthf_ptr(d);
}

void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearNamedBufferData_Func)(GLuint, GLenum, GLenum, GLenum, const void *);
  static GL_ClearNamedBufferData_Func glClearNamedBufferData_ptr = NULL;

  if (glClearNamedBufferData_ptr == NULL) {
    glClearNamedBufferData_ptr = (GL_ClearNamedBufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedBufferData_ptr(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizei size, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearNamedBufferSubData_Func)(GLuint, GLenum, GLintptr, GLsizei, GLenum, GLenum, const void *);
  static GL_ClearNamedBufferSubData_Func glClearNamedBufferSubData_ptr = NULL;

  if (glClearNamedBufferSubData_ptr == NULL) {
    glClearNamedBufferSubData_ptr = (GL_ClearNamedBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedBufferSubData_ptr(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil) {
  typedef void (APIENTRY * GL_ClearNamedFramebufferfi_Func)(GLuint, GLenum, const GLfloat, GLint);
  static GL_ClearNamedFramebufferfi_Func glClearNamedFramebufferfi_ptr = NULL;

  if (glClearNamedFramebufferfi_ptr == NULL) {
    glClearNamedFramebufferfi_ptr = (GL_ClearNamedFramebufferfi_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedFramebufferfi_ptr(framebuffer, buffer, depth, stencil);
}

void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value) {
  typedef void (APIENTRY * GL_ClearNamedFramebufferfv_Func)(GLuint, GLenum, GLint, const GLfloat *);
  static GL_ClearNamedFramebufferfv_Func glClearNamedFramebufferfv_ptr = NULL;

  if (glClearNamedFramebufferfv_ptr == NULL) {
    glClearNamedFramebufferfv_ptr = (GL_ClearNamedFramebufferfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedFramebufferfv_ptr(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value) {
  typedef void (APIENTRY * GL_ClearNamedFramebufferiv_Func)(GLuint, GLenum, GLint, const GLint *);
  static GL_ClearNamedFramebufferiv_Func glClearNamedFramebufferiv_ptr = NULL;

  if (glClearNamedFramebufferiv_ptr == NULL) {
    glClearNamedFramebufferiv_ptr = (GL_ClearNamedFramebufferiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedFramebufferiv_ptr(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value) {
  typedef void (APIENTRY * GL_ClearNamedFramebufferuiv_Func)(GLuint, GLenum, GLint, const GLuint *);
  static GL_ClearNamedFramebufferuiv_Func glClearNamedFramebufferuiv_ptr = NULL;

  if (glClearNamedFramebufferuiv_ptr == NULL) {
    glClearNamedFramebufferuiv_ptr = (GL_ClearNamedFramebufferuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearNamedFramebufferuiv_ptr(framebuffer, buffer, drawbuffer, value);
}

void glClearStencil(GLint s) {
  typedef void (APIENTRY * GL_ClearStencil_Func)(GLint);
  static GL_ClearStencil_Func glClearStencil_ptr = NULL;

  if (glClearStencil_ptr == NULL) {
    glClearStencil_ptr = (GL_ClearStencil_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearStencil_ptr(s);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearTexImage_Func)(GLuint, GLint, GLenum, GLenum, const void *);
  static GL_ClearTexImage_Func glClearTexImage_ptr = NULL;

  if (glClearTexImage_ptr == NULL) {
    glClearTexImage_ptr = (GL_ClearTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearTexImage_ptr(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data) {
  typedef void (APIENTRY * GL_ClearTexSubImage_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
  static GL_ClearTexSubImage_Func glClearTexSubImage_ptr = NULL;

  if (glClearTexSubImage_ptr == NULL) {
    glClearTexSubImage_ptr = (GL_ClearTexSubImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClearTexSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
  typedef GLenum (APIENTRY * GL_ClientWaitSync_Func)(GLsync, GLbitfield, GLuint64);
  static GL_ClientWaitSync_Func glClientWaitSync_ptr = NULL;

  if (glClientWaitSync_ptr == NULL) {
    glClientWaitSync_ptr = (GL_ClientWaitSync_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClientWaitSync_ptr(sync, flags, timeout);
}

void glClipControl(GLenum origin, GLenum depth) {
  typedef void (APIENTRY * GL_ClipControl_Func)(GLenum, GLenum);
  static GL_ClipControl_Func glClipControl_ptr = NULL;

  if (glClipControl_ptr == NULL) {
    glClipControl_ptr = (GL_ClipControl_Func)SDL_GL_GetProcAddress(__func__);
  }

  glClipControl_ptr(origin, depth);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
  typedef void (APIENTRY * GL_ColorMask_Func)(GLboolean, GLboolean, GLboolean, GLboolean);
  static GL_ColorMask_Func glColorMask_ptr = NULL;

  if (glColorMask_ptr == NULL) {
    glColorMask_ptr = (GL_ColorMask_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorMask_ptr(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
  typedef void (APIENTRY * GL_ColorMaski_Func)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
  static GL_ColorMaski_Func glColorMaski_ptr = NULL;

  if (glColorMaski_ptr == NULL) {
    glColorMaski_ptr = (GL_ColorMaski_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorMaski_ptr(index, r, g, b, a);
}

void glColorP3ui(GLenum type, GLuint color) {
  typedef void (APIENTRY * GL_ColorP3ui_Func)(GLenum, GLuint);
  static GL_ColorP3ui_Func glColorP3ui_ptr = NULL;

  if (glColorP3ui_ptr == NULL) {
    glColorP3ui_ptr = (GL_ColorP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorP3ui_ptr(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color) {
  typedef void (APIENTRY * GL_ColorP3uiv_Func)(GLenum, const GLuint *);
  static GL_ColorP3uiv_Func glColorP3uiv_ptr = NULL;

  if (glColorP3uiv_ptr == NULL) {
    glColorP3uiv_ptr = (GL_ColorP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorP3uiv_ptr(type, color);
}

void glColorP4ui(GLenum type, GLuint color) {
  typedef void (APIENTRY * GL_ColorP4ui_Func)(GLenum, GLuint);
  static GL_ColorP4ui_Func glColorP4ui_ptr = NULL;

  if (glColorP4ui_ptr == NULL) {
    glColorP4ui_ptr = (GL_ColorP4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorP4ui_ptr(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color) {
  typedef void (APIENTRY * GL_ColorP4uiv_Func)(GLenum, const GLuint *);
  static GL_ColorP4uiv_Func glColorP4uiv_ptr = NULL;

  if (glColorP4uiv_ptr == NULL) {
    glColorP4uiv_ptr = (GL_ColorP4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glColorP4uiv_ptr(type, color);
}

void glCompileShader(GLuint shader) {
  typedef void (APIENTRY * GL_CompileShader_Func)(GLuint);
  static GL_CompileShader_Func glCompileShader_ptr = NULL;

  if (glCompileShader_ptr == NULL) {
    glCompileShader_ptr = (GL_CompileShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompileShader_ptr(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexImage1D_Func)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *);
  static GL_CompressedTexImage1D_Func glCompressedTexImage1D_ptr = NULL;

  if (glCompressedTexImage1D_ptr == NULL) {
    glCompressedTexImage1D_ptr = (GL_CompressedTexImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexImage1D_ptr(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexImage2D_Func)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
  static GL_CompressedTexImage2D_Func glCompressedTexImage2D_ptr = NULL;

  if (glCompressedTexImage2D_ptr == NULL) {
    glCompressedTexImage2D_ptr = (GL_CompressedTexImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexImage2D_ptr(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexImage3D_Func)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *);
  static GL_CompressedTexImage3D_Func glCompressedTexImage3D_ptr = NULL;

  if (glCompressedTexImage3D_ptr == NULL) {
    glCompressedTexImage3D_ptr = (GL_CompressedTexImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexImage3D_ptr(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexSubImage1D_Func)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTexSubImage1D_Func glCompressedTexSubImage1D_ptr = NULL;

  if (glCompressedTexSubImage1D_ptr == NULL) {
    glCompressedTexSubImage1D_ptr = (GL_CompressedTexSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexSubImage1D_ptr(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexSubImage2D_Func)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTexSubImage2D_Func glCompressedTexSubImage2D_ptr = NULL;

  if (glCompressedTexSubImage2D_ptr == NULL) {
    glCompressedTexSubImage2D_ptr = (GL_CompressedTexSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexSubImage2D_ptr(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTexSubImage3D_Func)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTexSubImage3D_Func glCompressedTexSubImage3D_ptr = NULL;

  if (glCompressedTexSubImage3D_ptr == NULL) {
    glCompressedTexSubImage3D_ptr = (GL_CompressedTexSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTextureSubImage1D_Func)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTextureSubImage1D_Func glCompressedTextureSubImage1D_ptr = NULL;

  if (glCompressedTextureSubImage1D_ptr == NULL) {
    glCompressedTextureSubImage1D_ptr = (GL_CompressedTextureSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTextureSubImage1D_ptr(texture, level, xoffset, width, format, imageSize, data);
}

void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTextureSubImage2D_Func)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTextureSubImage2D_Func glCompressedTextureSubImage2D_ptr = NULL;

  if (glCompressedTextureSubImage2D_ptr == NULL) {
    glCompressedTextureSubImage2D_ptr = (GL_CompressedTextureSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTextureSubImage2D_ptr(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) {
  typedef void (APIENTRY * GL_CompressedTextureSubImage3D_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
  static GL_CompressedTextureSubImage3D_Func glCompressedTextureSubImage3D_ptr = NULL;

  if (glCompressedTextureSubImage3D_ptr == NULL) {
    glCompressedTextureSubImage3D_ptr = (GL_CompressedTextureSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCompressedTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
  typedef void (APIENTRY * GL_CopyBufferSubData_Func)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
  static GL_CopyBufferSubData_Func glCopyBufferSubData_ptr = NULL;

  if (glCopyBufferSubData_ptr == NULL) {
    glCopyBufferSubData_ptr = (GL_CopyBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyBufferSubData_ptr(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
  typedef void (APIENTRY * GL_CopyImageSubData_Func)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
  static GL_CopyImageSubData_Func glCopyImageSubData_ptr = NULL;

  if (glCopyImageSubData_ptr == NULL) {
    glCopyImageSubData_ptr = (GL_CopyImageSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyImageSubData_ptr(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizei size) {
  typedef void (APIENTRY * GL_CopyNamedBufferSubData_Func)(GLuint, GLuint, GLintptr, GLintptr, GLsizei);
  static GL_CopyNamedBufferSubData_Func glCopyNamedBufferSubData_ptr = NULL;

  if (glCopyNamedBufferSubData_ptr == NULL) {
    glCopyNamedBufferSubData_ptr = (GL_CopyNamedBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyNamedBufferSubData_ptr(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
  typedef void (APIENTRY * GL_CopyTexImage1D_Func)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
  static GL_CopyTexImage1D_Func glCopyTexImage1D_ptr = NULL;

  if (glCopyTexImage1D_ptr == NULL) {
    glCopyTexImage1D_ptr = (GL_CopyTexImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTexImage1D_ptr(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
  typedef void (APIENTRY * GL_CopyTexImage2D_Func)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
  static GL_CopyTexImage2D_Func glCopyTexImage2D_ptr = NULL;

  if (glCopyTexImage2D_ptr == NULL) {
    glCopyTexImage2D_ptr = (GL_CopyTexImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTexImage2D_ptr(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
  typedef void (APIENTRY * GL_CopyTexSubImage1D_Func)(GLenum, GLint, GLint, GLint, GLint, GLsizei);
  static GL_CopyTexSubImage1D_Func glCopyTexSubImage1D_ptr = NULL;

  if (glCopyTexSubImage1D_ptr == NULL) {
    glCopyTexSubImage1D_ptr = (GL_CopyTexSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTexSubImage1D_ptr(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_CopyTexSubImage2D_Func)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
  static GL_CopyTexSubImage2D_Func glCopyTexSubImage2D_ptr = NULL;

  if (glCopyTexSubImage2D_ptr == NULL) {
    glCopyTexSubImage2D_ptr = (GL_CopyTexSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTexSubImage2D_ptr(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_CopyTexSubImage3D_Func)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
  static GL_CopyTexSubImage3D_Func glCopyTexSubImage3D_ptr = NULL;

  if (glCopyTexSubImage3D_ptr == NULL) {
    glCopyTexSubImage3D_ptr = (GL_CopyTexSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
  typedef void (APIENTRY * GL_CopyTextureSubImage1D_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei);
  static GL_CopyTextureSubImage1D_Func glCopyTextureSubImage1D_ptr = NULL;

  if (glCopyTextureSubImage1D_ptr == NULL) {
    glCopyTextureSubImage1D_ptr = (GL_CopyTextureSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTextureSubImage1D_ptr(texture, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_CopyTextureSubImage2D_Func)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
  static GL_CopyTextureSubImage2D_Func glCopyTextureSubImage2D_ptr = NULL;

  if (glCopyTextureSubImage2D_ptr == NULL) {
    glCopyTextureSubImage2D_ptr = (GL_CopyTextureSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTextureSubImage2D_ptr(texture, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_CopyTextureSubImage3D_Func)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
  static GL_CopyTextureSubImage3D_Func glCopyTextureSubImage3D_ptr = NULL;

  if (glCopyTextureSubImage3D_ptr == NULL) {
    glCopyTextureSubImage3D_ptr = (GL_CopyTextureSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCopyTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCreateBuffers(GLsizei n, GLuint * buffers) {
  typedef void (APIENTRY * GL_CreateBuffers_Func)(GLsizei, GLuint *);
  static GL_CreateBuffers_Func glCreateBuffers_ptr = NULL;

  if (glCreateBuffers_ptr == NULL) {
    glCreateBuffers_ptr = (GL_CreateBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateBuffers_ptr(n, buffers);
}

void glCreateFramebuffers(GLsizei n, GLuint * framebuffers) {
  typedef void (APIENTRY * GL_CreateFramebuffers_Func)(GLsizei, GLuint *);
  static GL_CreateFramebuffers_Func glCreateFramebuffers_ptr = NULL;

  if (glCreateFramebuffers_ptr == NULL) {
    glCreateFramebuffers_ptr = (GL_CreateFramebuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateFramebuffers_ptr(n, framebuffers);
}

GLuint glCreateProgram() {
  typedef GLuint (APIENTRY * GL_CreateProgram_Func)();
  static GL_CreateProgram_Func glCreateProgram_ptr = NULL;

  if (glCreateProgram_ptr == NULL) {
    glCreateProgram_ptr = (GL_CreateProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateProgram_ptr();
}

void glCreateProgramPipelines(GLsizei n, GLuint * pipelines) {
  typedef void (APIENTRY * GL_CreateProgramPipelines_Func)(GLsizei, GLuint *);
  static GL_CreateProgramPipelines_Func glCreateProgramPipelines_ptr = NULL;

  if (glCreateProgramPipelines_ptr == NULL) {
    glCreateProgramPipelines_ptr = (GL_CreateProgramPipelines_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateProgramPipelines_ptr(n, pipelines);
}

void glCreateQueries(GLenum target, GLsizei n, GLuint * ids) {
  typedef void (APIENTRY * GL_CreateQueries_Func)(GLenum, GLsizei, GLuint *);
  static GL_CreateQueries_Func glCreateQueries_ptr = NULL;

  if (glCreateQueries_ptr == NULL) {
    glCreateQueries_ptr = (GL_CreateQueries_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateQueries_ptr(target, n, ids);
}

void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers) {
  typedef void (APIENTRY * GL_CreateRenderbuffers_Func)(GLsizei, GLuint *);
  static GL_CreateRenderbuffers_Func glCreateRenderbuffers_ptr = NULL;

  if (glCreateRenderbuffers_ptr == NULL) {
    glCreateRenderbuffers_ptr = (GL_CreateRenderbuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateRenderbuffers_ptr(n, renderbuffers);
}

void glCreateSamplers(GLsizei n, GLuint * samplers) {
  typedef void (APIENTRY * GL_CreateSamplers_Func)(GLsizei, GLuint *);
  static GL_CreateSamplers_Func glCreateSamplers_ptr = NULL;

  if (glCreateSamplers_ptr == NULL) {
    glCreateSamplers_ptr = (GL_CreateSamplers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateSamplers_ptr(n, samplers);
}

GLuint glCreateShader(GLenum type) {
  typedef GLuint (APIENTRY * GL_CreateShader_Func)(GLenum);
  static GL_CreateShader_Func glCreateShader_ptr = NULL;

  if (glCreateShader_ptr == NULL) {
    glCreateShader_ptr = (GL_CreateShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateShader_ptr(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings) {
  typedef GLuint (APIENTRY * GL_CreateShaderProgramv_Func)(GLenum, GLsizei, const GLchar *const*);
  static GL_CreateShaderProgramv_Func glCreateShaderProgramv_ptr = NULL;

  if (glCreateShaderProgramv_ptr == NULL) {
    glCreateShaderProgramv_ptr = (GL_CreateShaderProgramv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateShaderProgramv_ptr(type, count, strings);
}

void glCreateTextures(GLenum target, GLsizei n, GLuint * textures) {
  typedef void (APIENTRY * GL_CreateTextures_Func)(GLenum, GLsizei, GLuint *);
  static GL_CreateTextures_Func glCreateTextures_ptr = NULL;

  if (glCreateTextures_ptr == NULL) {
    glCreateTextures_ptr = (GL_CreateTextures_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateTextures_ptr(target, n, textures);
}

void glCreateTransformFeedbacks(GLsizei n, GLuint * ids) {
  typedef void (APIENTRY * GL_CreateTransformFeedbacks_Func)(GLsizei, GLuint *);
  static GL_CreateTransformFeedbacks_Func glCreateTransformFeedbacks_ptr = NULL;

  if (glCreateTransformFeedbacks_ptr == NULL) {
    glCreateTransformFeedbacks_ptr = (GL_CreateTransformFeedbacks_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateTransformFeedbacks_ptr(n, ids);
}

void glCreateVertexArrays(GLsizei n, GLuint * arrays) {
  typedef void (APIENTRY * GL_CreateVertexArrays_Func)(GLsizei, GLuint *);
  static GL_CreateVertexArrays_Func glCreateVertexArrays_ptr = NULL;

  if (glCreateVertexArrays_ptr == NULL) {
    glCreateVertexArrays_ptr = (GL_CreateVertexArrays_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCreateVertexArrays_ptr(n, arrays);
}

void glCullFace(GLenum mode) {
  typedef void (APIENTRY * GL_CullFace_Func)(GLenum);
  static GL_CullFace_Func glCullFace_ptr = NULL;

  if (glCullFace_ptr == NULL) {
    glCullFace_ptr = (GL_CullFace_Func)SDL_GL_GetProcAddress(__func__);
  }

  glCullFace_ptr(mode);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam) {
  typedef void (APIENTRY * GL_DebugMessageCallback_Func)(GLDEBUGPROC, const void *);
  static GL_DebugMessageCallback_Func glDebugMessageCallback_ptr = NULL;

  if (glDebugMessageCallback_ptr == NULL) {
    glDebugMessageCallback_ptr = (GL_DebugMessageCallback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDebugMessageCallback_ptr(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) {
  typedef void (APIENTRY * GL_DebugMessageControl_Func)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
  static GL_DebugMessageControl_Func glDebugMessageControl_ptr = NULL;

  if (glDebugMessageControl_ptr == NULL) {
    glDebugMessageControl_ptr = (GL_DebugMessageControl_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDebugMessageControl_ptr(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) {
  typedef void (APIENTRY * GL_DebugMessageInsert_Func)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
  static GL_DebugMessageInsert_Func glDebugMessageInsert_ptr = NULL;

  if (glDebugMessageInsert_ptr == NULL) {
    glDebugMessageInsert_ptr = (GL_DebugMessageInsert_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDebugMessageInsert_ptr(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers) {
  typedef void (APIENTRY * GL_DeleteBuffers_Func)(GLsizei, const GLuint *);
  static GL_DeleteBuffers_Func glDeleteBuffers_ptr = NULL;

  if (glDeleteBuffers_ptr == NULL) {
    glDeleteBuffers_ptr = (GL_DeleteBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteBuffers_ptr(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) {
  typedef void (APIENTRY * GL_DeleteFramebuffers_Func)(GLsizei, const GLuint *);
  static GL_DeleteFramebuffers_Func glDeleteFramebuffers_ptr = NULL;

  if (glDeleteFramebuffers_ptr == NULL) {
    glDeleteFramebuffers_ptr = (GL_DeleteFramebuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteFramebuffers_ptr(n, framebuffers);
}

void glDeleteProgram(GLuint program) {
  typedef void (APIENTRY * GL_DeleteProgram_Func)(GLuint);
  static GL_DeleteProgram_Func glDeleteProgram_ptr = NULL;

  if (glDeleteProgram_ptr == NULL) {
    glDeleteProgram_ptr = (GL_DeleteProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteProgram_ptr(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines) {
  typedef void (APIENTRY * GL_DeleteProgramPipelines_Func)(GLsizei, const GLuint *);
  static GL_DeleteProgramPipelines_Func glDeleteProgramPipelines_ptr = NULL;

  if (glDeleteProgramPipelines_ptr == NULL) {
    glDeleteProgramPipelines_ptr = (GL_DeleteProgramPipelines_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteProgramPipelines_ptr(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids) {
  typedef void (APIENTRY * GL_DeleteQueries_Func)(GLsizei, const GLuint *);
  static GL_DeleteQueries_Func glDeleteQueries_ptr = NULL;

  if (glDeleteQueries_ptr == NULL) {
    glDeleteQueries_ptr = (GL_DeleteQueries_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteQueries_ptr(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) {
  typedef void (APIENTRY * GL_DeleteRenderbuffers_Func)(GLsizei, const GLuint *);
  static GL_DeleteRenderbuffers_Func glDeleteRenderbuffers_ptr = NULL;

  if (glDeleteRenderbuffers_ptr == NULL) {
    glDeleteRenderbuffers_ptr = (GL_DeleteRenderbuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteRenderbuffers_ptr(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers) {
  typedef void (APIENTRY * GL_DeleteSamplers_Func)(GLsizei, const GLuint *);
  static GL_DeleteSamplers_Func glDeleteSamplers_ptr = NULL;

  if (glDeleteSamplers_ptr == NULL) {
    glDeleteSamplers_ptr = (GL_DeleteSamplers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteSamplers_ptr(count, samplers);
}

void glDeleteShader(GLuint shader) {
  typedef void (APIENTRY * GL_DeleteShader_Func)(GLuint);
  static GL_DeleteShader_Func glDeleteShader_ptr = NULL;

  if (glDeleteShader_ptr == NULL) {
    glDeleteShader_ptr = (GL_DeleteShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteShader_ptr(shader);
}

void glDeleteSync(GLsync sync) {
  typedef void (APIENTRY * GL_DeleteSync_Func)(GLsync);
  static GL_DeleteSync_Func glDeleteSync_ptr = NULL;

  if (glDeleteSync_ptr == NULL) {
    glDeleteSync_ptr = (GL_DeleteSync_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteSync_ptr(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures) {
  typedef void (APIENTRY * GL_DeleteTextures_Func)(GLsizei, const GLuint *);
  static GL_DeleteTextures_Func glDeleteTextures_ptr = NULL;

  if (glDeleteTextures_ptr == NULL) {
    glDeleteTextures_ptr = (GL_DeleteTextures_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteTextures_ptr(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids) {
  typedef void (APIENTRY * GL_DeleteTransformFeedbacks_Func)(GLsizei, const GLuint *);
  static GL_DeleteTransformFeedbacks_Func glDeleteTransformFeedbacks_ptr = NULL;

  if (glDeleteTransformFeedbacks_ptr == NULL) {
    glDeleteTransformFeedbacks_ptr = (GL_DeleteTransformFeedbacks_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteTransformFeedbacks_ptr(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays) {
  typedef void (APIENTRY * GL_DeleteVertexArrays_Func)(GLsizei, const GLuint *);
  static GL_DeleteVertexArrays_Func glDeleteVertexArrays_ptr = NULL;

  if (glDeleteVertexArrays_ptr == NULL) {
    glDeleteVertexArrays_ptr = (GL_DeleteVertexArrays_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDeleteVertexArrays_ptr(n, arrays);
}

void glDepthFunc(GLenum func) {
  typedef void (APIENTRY * GL_DepthFunc_Func)(GLenum);
  static GL_DepthFunc_Func glDepthFunc_ptr = NULL;

  if (glDepthFunc_ptr == NULL) {
    glDepthFunc_ptr = (GL_DepthFunc_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthFunc_ptr(func);
}

void glDepthMask(GLboolean flag) {
  typedef void (APIENTRY * GL_DepthMask_Func)(GLboolean);
  static GL_DepthMask_Func glDepthMask_ptr = NULL;

  if (glDepthMask_ptr == NULL) {
    glDepthMask_ptr = (GL_DepthMask_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthMask_ptr(flag);
}

void glDepthRange(GLdouble near, GLdouble far) {
  typedef void (APIENTRY * GL_DepthRange_Func)(GLdouble, GLdouble);
  static GL_DepthRange_Func glDepthRange_ptr = NULL;

  if (glDepthRange_ptr == NULL) {
    glDepthRange_ptr = (GL_DepthRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthRange_ptr(near, far);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v) {
  typedef void (APIENTRY * GL_DepthRangeArrayv_Func)(GLuint, GLsizei, const GLdouble *);
  static GL_DepthRangeArrayv_Func glDepthRangeArrayv_ptr = NULL;

  if (glDepthRangeArrayv_ptr == NULL) {
    glDepthRangeArrayv_ptr = (GL_DepthRangeArrayv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthRangeArrayv_ptr(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) {
  typedef void (APIENTRY * GL_DepthRangeIndexed_Func)(GLuint, GLdouble, GLdouble);
  static GL_DepthRangeIndexed_Func glDepthRangeIndexed_ptr = NULL;

  if (glDepthRangeIndexed_ptr == NULL) {
    glDepthRangeIndexed_ptr = (GL_DepthRangeIndexed_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthRangeIndexed_ptr(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f) {
  typedef void (APIENTRY * GL_DepthRangef_Func)(GLfloat, GLfloat);
  static GL_DepthRangef_Func glDepthRangef_ptr = NULL;

  if (glDepthRangef_ptr == NULL) {
    glDepthRangef_ptr = (GL_DepthRangef_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDepthRangef_ptr(n, f);
}

void glDetachShader(GLuint program, GLuint shader) {
  typedef void (APIENTRY * GL_DetachShader_Func)(GLuint, GLuint);
  static GL_DetachShader_Func glDetachShader_ptr = NULL;

  if (glDetachShader_ptr == NULL) {
    glDetachShader_ptr = (GL_DetachShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDetachShader_ptr(program, shader);
}

void glDisable(GLenum cap) {
  typedef void (APIENTRY * GL_Disable_Func)(GLenum);
  static GL_Disable_Func glDisable_ptr = NULL;

  if (glDisable_ptr == NULL) {
    glDisable_ptr = (GL_Disable_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDisable_ptr(cap);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) {
  typedef void (APIENTRY * GL_DisableVertexArrayAttrib_Func)(GLuint, GLuint);
  static GL_DisableVertexArrayAttrib_Func glDisableVertexArrayAttrib_ptr = NULL;

  if (glDisableVertexArrayAttrib_ptr == NULL) {
    glDisableVertexArrayAttrib_ptr = (GL_DisableVertexArrayAttrib_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDisableVertexArrayAttrib_ptr(vaobj, index);
}

void glDisableVertexAttribArray(GLuint index) {
  typedef void (APIENTRY * GL_DisableVertexAttribArray_Func)(GLuint);
  static GL_DisableVertexAttribArray_Func glDisableVertexAttribArray_ptr = NULL;

  if (glDisableVertexAttribArray_ptr == NULL) {
    glDisableVertexAttribArray_ptr = (GL_DisableVertexAttribArray_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDisableVertexAttribArray_ptr(index);
}

void glDisablei(GLenum target, GLuint index) {
  typedef void (APIENTRY * GL_Disablei_Func)(GLenum, GLuint);
  static GL_Disablei_Func glDisablei_ptr = NULL;

  if (glDisablei_ptr == NULL) {
    glDisablei_ptr = (GL_Disablei_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDisablei_ptr(target, index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
  typedef void (APIENTRY * GL_DispatchCompute_Func)(GLuint, GLuint, GLuint);
  static GL_DispatchCompute_Func glDispatchCompute_ptr = NULL;

  if (glDispatchCompute_ptr == NULL) {
    glDispatchCompute_ptr = (GL_DispatchCompute_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDispatchCompute_ptr(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect) {
  typedef void (APIENTRY * GL_DispatchComputeIndirect_Func)(GLintptr);
  static GL_DispatchComputeIndirect_Func glDispatchComputeIndirect_ptr = NULL;

  if (glDispatchComputeIndirect_ptr == NULL) {
    glDispatchComputeIndirect_ptr = (GL_DispatchComputeIndirect_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDispatchComputeIndirect_ptr(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count) {
  typedef void (APIENTRY * GL_DrawArrays_Func)(GLenum, GLint, GLsizei);
  static GL_DrawArrays_Func glDrawArrays_ptr = NULL;

  if (glDrawArrays_ptr == NULL) {
    glDrawArrays_ptr = (GL_DrawArrays_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawArrays_ptr(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect) {
  typedef void (APIENTRY * GL_DrawArraysIndirect_Func)(GLenum, const void *);
  static GL_DrawArraysIndirect_Func glDrawArraysIndirect_ptr = NULL;

  if (glDrawArraysIndirect_ptr == NULL) {
    glDrawArraysIndirect_ptr = (GL_DrawArraysIndirect_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawArraysIndirect_ptr(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
  typedef void (APIENTRY * GL_DrawArraysInstanced_Func)(GLenum, GLint, GLsizei, GLsizei);
  static GL_DrawArraysInstanced_Func glDrawArraysInstanced_ptr = NULL;

  if (glDrawArraysInstanced_ptr == NULL) {
    glDrawArraysInstanced_ptr = (GL_DrawArraysInstanced_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawArraysInstanced_ptr(mode, first, count, instancecount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
  typedef void (APIENTRY * GL_DrawArraysInstancedBaseInstance_Func)(GLenum, GLint, GLsizei, GLsizei, GLuint);
  static GL_DrawArraysInstancedBaseInstance_Func glDrawArraysInstancedBaseInstance_ptr = NULL;

  if (glDrawArraysInstancedBaseInstance_ptr == NULL) {
    glDrawArraysInstancedBaseInstance_ptr = (GL_DrawArraysInstancedBaseInstance_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawArraysInstancedBaseInstance_ptr(mode, first, count, instancecount, baseinstance);
}

void glDrawBuffer(GLenum buf) {
  typedef void (APIENTRY * GL_DrawBuffer_Func)(GLenum);
  static GL_DrawBuffer_Func glDrawBuffer_ptr = NULL;

  if (glDrawBuffer_ptr == NULL) {
    glDrawBuffer_ptr = (GL_DrawBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawBuffer_ptr(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs) {
  typedef void (APIENTRY * GL_DrawBuffers_Func)(GLsizei, const GLenum *);
  static GL_DrawBuffers_Func glDrawBuffers_ptr = NULL;

  if (glDrawBuffers_ptr == NULL) {
    glDrawBuffers_ptr = (GL_DrawBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawBuffers_ptr(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices) {
  typedef void (APIENTRY * GL_DrawElements_Func)(GLenum, GLsizei, GLenum, const void *);
  static GL_DrawElements_Func glDrawElements_ptr = NULL;

  if (glDrawElements_ptr == NULL) {
    glDrawElements_ptr = (GL_DrawElements_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElements_ptr(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) {
  typedef void (APIENTRY * GL_DrawElementsBaseVertex_Func)(GLenum, GLsizei, GLenum, const void *, GLint);
  static GL_DrawElementsBaseVertex_Func glDrawElementsBaseVertex_ptr = NULL;

  if (glDrawElementsBaseVertex_ptr == NULL) {
    glDrawElementsBaseVertex_ptr = (GL_DrawElementsBaseVertex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsBaseVertex_ptr(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect) {
  typedef void (APIENTRY * GL_DrawElementsIndirect_Func)(GLenum, GLenum, const void *);
  static GL_DrawElementsIndirect_Func glDrawElementsIndirect_ptr = NULL;

  if (glDrawElementsIndirect_ptr == NULL) {
    glDrawElementsIndirect_ptr = (GL_DrawElementsIndirect_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsIndirect_ptr(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) {
  typedef void (APIENTRY * GL_DrawElementsInstanced_Func)(GLenum, GLsizei, GLenum, const void *, GLsizei);
  static GL_DrawElementsInstanced_Func glDrawElementsInstanced_ptr = NULL;

  if (glDrawElementsInstanced_ptr == NULL) {
    glDrawElementsInstanced_ptr = (GL_DrawElementsInstanced_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsInstanced_ptr(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance) {
  typedef void (APIENTRY * GL_DrawElementsInstancedBaseInstance_Func)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint);
  static GL_DrawElementsInstancedBaseInstance_Func glDrawElementsInstancedBaseInstance_ptr = NULL;

  if (glDrawElementsInstancedBaseInstance_ptr == NULL) {
    glDrawElementsInstancedBaseInstance_ptr = (GL_DrawElementsInstancedBaseInstance_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsInstancedBaseInstance_ptr(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) {
  typedef void (APIENTRY * GL_DrawElementsInstancedBaseVertex_Func)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint);
  static GL_DrawElementsInstancedBaseVertex_Func glDrawElementsInstancedBaseVertex_ptr = NULL;

  if (glDrawElementsInstancedBaseVertex_ptr == NULL) {
    glDrawElementsInstancedBaseVertex_ptr = (GL_DrawElementsInstancedBaseVertex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsInstancedBaseVertex_ptr(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
  typedef void (APIENTRY * GL_DrawElementsInstancedBaseVertexBaseInstance_Func)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint);
  static GL_DrawElementsInstancedBaseVertexBaseInstance_Func glDrawElementsInstancedBaseVertexBaseInstance_ptr = NULL;

  if (glDrawElementsInstancedBaseVertexBaseInstance_ptr == NULL) {
    glDrawElementsInstancedBaseVertexBaseInstance_ptr = (GL_DrawElementsInstancedBaseVertexBaseInstance_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawElementsInstancedBaseVertexBaseInstance_ptr(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) {
  typedef void (APIENTRY * GL_DrawRangeElements_Func)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *);
  static GL_DrawRangeElements_Func glDrawRangeElements_ptr = NULL;

  if (glDrawRangeElements_ptr == NULL) {
    glDrawRangeElements_ptr = (GL_DrawRangeElements_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawRangeElements_ptr(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) {
  typedef void (APIENTRY * GL_DrawRangeElementsBaseVertex_Func)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint);
  static GL_DrawRangeElementsBaseVertex_Func glDrawRangeElementsBaseVertex_ptr = NULL;

  if (glDrawRangeElementsBaseVertex_ptr == NULL) {
    glDrawRangeElementsBaseVertex_ptr = (GL_DrawRangeElementsBaseVertex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawRangeElementsBaseVertex_ptr(mode, start, end, count, type, indices, basevertex);
}

void glDrawTransformFeedback(GLenum mode, GLuint id) {
  typedef void (APIENTRY * GL_DrawTransformFeedback_Func)(GLenum, GLuint);
  static GL_DrawTransformFeedback_Func glDrawTransformFeedback_ptr = NULL;

  if (glDrawTransformFeedback_ptr == NULL) {
    glDrawTransformFeedback_ptr = (GL_DrawTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawTransformFeedback_ptr(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) {
  typedef void (APIENTRY * GL_DrawTransformFeedbackInstanced_Func)(GLenum, GLuint, GLsizei);
  static GL_DrawTransformFeedbackInstanced_Func glDrawTransformFeedbackInstanced_ptr = NULL;

  if (glDrawTransformFeedbackInstanced_ptr == NULL) {
    glDrawTransformFeedbackInstanced_ptr = (GL_DrawTransformFeedbackInstanced_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawTransformFeedbackInstanced_ptr(mode, id, instancecount);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) {
  typedef void (APIENTRY * GL_DrawTransformFeedbackStream_Func)(GLenum, GLuint, GLuint);
  static GL_DrawTransformFeedbackStream_Func glDrawTransformFeedbackStream_ptr = NULL;

  if (glDrawTransformFeedbackStream_ptr == NULL) {
    glDrawTransformFeedbackStream_ptr = (GL_DrawTransformFeedbackStream_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawTransformFeedbackStream_ptr(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
  typedef void (APIENTRY * GL_DrawTransformFeedbackStreamInstanced_Func)(GLenum, GLuint, GLuint, GLsizei);
  static GL_DrawTransformFeedbackStreamInstanced_Func glDrawTransformFeedbackStreamInstanced_ptr = NULL;

  if (glDrawTransformFeedbackStreamInstanced_ptr == NULL) {
    glDrawTransformFeedbackStreamInstanced_ptr = (GL_DrawTransformFeedbackStreamInstanced_Func)SDL_GL_GetProcAddress(__func__);
  }

  glDrawTransformFeedbackStreamInstanced_ptr(mode, id, stream, instancecount);
}

void glEnable(GLenum cap) {
  typedef void (APIENTRY * GL_Enable_Func)(GLenum);
  static GL_Enable_Func glEnable_ptr = NULL;

  if (glEnable_ptr == NULL) {
    glEnable_ptr = (GL_Enable_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEnable_ptr(cap);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) {
  typedef void (APIENTRY * GL_EnableVertexArrayAttrib_Func)(GLuint, GLuint);
  static GL_EnableVertexArrayAttrib_Func glEnableVertexArrayAttrib_ptr = NULL;

  if (glEnableVertexArrayAttrib_ptr == NULL) {
    glEnableVertexArrayAttrib_ptr = (GL_EnableVertexArrayAttrib_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEnableVertexArrayAttrib_ptr(vaobj, index);
}

void glEnableVertexAttribArray(GLuint index) {
  typedef void (APIENTRY * GL_EnableVertexAttribArray_Func)(GLuint);
  static GL_EnableVertexAttribArray_Func glEnableVertexAttribArray_ptr = NULL;

  if (glEnableVertexAttribArray_ptr == NULL) {
    glEnableVertexAttribArray_ptr = (GL_EnableVertexAttribArray_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEnableVertexAttribArray_ptr(index);
}

void glEnablei(GLenum target, GLuint index) {
  typedef void (APIENTRY * GL_Enablei_Func)(GLenum, GLuint);
  static GL_Enablei_Func glEnablei_ptr = NULL;

  if (glEnablei_ptr == NULL) {
    glEnablei_ptr = (GL_Enablei_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEnablei_ptr(target, index);
}

void glEndConditionalRender() {
  typedef void (APIENTRY * GL_EndConditionalRender_Func)();
  static GL_EndConditionalRender_Func glEndConditionalRender_ptr = NULL;

  if (glEndConditionalRender_ptr == NULL) {
    glEndConditionalRender_ptr = (GL_EndConditionalRender_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEndConditionalRender_ptr();
}

void glEndQuery(GLenum target) {
  typedef void (APIENTRY * GL_EndQuery_Func)(GLenum);
  static GL_EndQuery_Func glEndQuery_ptr = NULL;

  if (glEndQuery_ptr == NULL) {
    glEndQuery_ptr = (GL_EndQuery_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEndQuery_ptr(target);
}

void glEndQueryIndexed(GLenum target, GLuint index) {
  typedef void (APIENTRY * GL_EndQueryIndexed_Func)(GLenum, GLuint);
  static GL_EndQueryIndexed_Func glEndQueryIndexed_ptr = NULL;

  if (glEndQueryIndexed_ptr == NULL) {
    glEndQueryIndexed_ptr = (GL_EndQueryIndexed_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEndQueryIndexed_ptr(target, index);
}

void glEndTransformFeedback() {
  typedef void (APIENTRY * GL_EndTransformFeedback_Func)();
  static GL_EndTransformFeedback_Func glEndTransformFeedback_ptr = NULL;

  if (glEndTransformFeedback_ptr == NULL) {
    glEndTransformFeedback_ptr = (GL_EndTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glEndTransformFeedback_ptr();
}

GLsync glFenceSync(GLenum condition, GLbitfield flags) {
  typedef GLsync (APIENTRY * GL_FenceSync_Func)(GLenum, GLbitfield);
  static GL_FenceSync_Func glFenceSync_ptr = NULL;

  if (glFenceSync_ptr == NULL) {
    glFenceSync_ptr = (GL_FenceSync_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFenceSync_ptr(condition, flags);
}

void glFinish() {
  typedef void (APIENTRY * GL_Finish_Func)();
  static GL_Finish_Func glFinish_ptr = NULL;

  if (glFinish_ptr == NULL) {
    glFinish_ptr = (GL_Finish_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFinish_ptr();
}

void glFlush() {
  typedef void (APIENTRY * GL_Flush_Func)();
  static GL_Flush_Func glFlush_ptr = NULL;

  if (glFlush_ptr == NULL) {
    glFlush_ptr = (GL_Flush_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFlush_ptr();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) {
  typedef void (APIENTRY * GL_FlushMappedBufferRange_Func)(GLenum, GLintptr, GLsizeiptr);
  static GL_FlushMappedBufferRange_Func glFlushMappedBufferRange_ptr = NULL;

  if (glFlushMappedBufferRange_ptr == NULL) {
    glFlushMappedBufferRange_ptr = (GL_FlushMappedBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFlushMappedBufferRange_ptr(target, offset, length);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizei length) {
  typedef void (APIENTRY * GL_FlushMappedNamedBufferRange_Func)(GLuint, GLintptr, GLsizei);
  static GL_FlushMappedNamedBufferRange_Func glFlushMappedNamedBufferRange_ptr = NULL;

  if (glFlushMappedNamedBufferRange_ptr == NULL) {
    glFlushMappedNamedBufferRange_ptr = (GL_FlushMappedNamedBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFlushMappedNamedBufferRange_ptr(buffer, offset, length);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_FramebufferParameteri_Func)(GLenum, GLenum, GLint);
  static GL_FramebufferParameteri_Func glFramebufferParameteri_ptr = NULL;

  if (glFramebufferParameteri_ptr == NULL) {
    glFramebufferParameteri_ptr = (GL_FramebufferParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferParameteri_ptr(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
  typedef void (APIENTRY * GL_FramebufferRenderbuffer_Func)(GLenum, GLenum, GLenum, GLuint);
  static GL_FramebufferRenderbuffer_Func glFramebufferRenderbuffer_ptr = NULL;

  if (glFramebufferRenderbuffer_ptr == NULL) {
    glFramebufferRenderbuffer_ptr = (GL_FramebufferRenderbuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferRenderbuffer_ptr(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) {
  typedef void (APIENTRY * GL_FramebufferTexture_Func)(GLenum, GLenum, GLuint, GLint);
  static GL_FramebufferTexture_Func glFramebufferTexture_ptr = NULL;

  if (glFramebufferTexture_ptr == NULL) {
    glFramebufferTexture_ptr = (GL_FramebufferTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferTexture_ptr(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
  typedef void (APIENTRY * GL_FramebufferTexture1D_Func)(GLenum, GLenum, GLenum, GLuint, GLint);
  static GL_FramebufferTexture1D_Func glFramebufferTexture1D_ptr = NULL;

  if (glFramebufferTexture1D_ptr == NULL) {
    glFramebufferTexture1D_ptr = (GL_FramebufferTexture1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferTexture1D_ptr(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
  typedef void (APIENTRY * GL_FramebufferTexture2D_Func)(GLenum, GLenum, GLenum, GLuint, GLint);
  static GL_FramebufferTexture2D_Func glFramebufferTexture2D_ptr = NULL;

  if (glFramebufferTexture2D_ptr == NULL) {
    glFramebufferTexture2D_ptr = (GL_FramebufferTexture2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferTexture2D_ptr(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
  typedef void (APIENTRY * GL_FramebufferTexture3D_Func)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
  static GL_FramebufferTexture3D_Func glFramebufferTexture3D_ptr = NULL;

  if (glFramebufferTexture3D_ptr == NULL) {
    glFramebufferTexture3D_ptr = (GL_FramebufferTexture3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferTexture3D_ptr(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
  typedef void (APIENTRY * GL_FramebufferTextureLayer_Func)(GLenum, GLenum, GLuint, GLint, GLint);
  static GL_FramebufferTextureLayer_Func glFramebufferTextureLayer_ptr = NULL;

  if (glFramebufferTextureLayer_ptr == NULL) {
    glFramebufferTextureLayer_ptr = (GL_FramebufferTextureLayer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFramebufferTextureLayer_ptr(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode) {
  typedef void (APIENTRY * GL_FrontFace_Func)(GLenum);
  static GL_FrontFace_Func glFrontFace_ptr = NULL;

  if (glFrontFace_ptr == NULL) {
    glFrontFace_ptr = (GL_FrontFace_Func)SDL_GL_GetProcAddress(__func__);
  }

  glFrontFace_ptr(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers) {
  typedef void (APIENTRY * GL_GenBuffers_Func)(GLsizei, GLuint *);
  static GL_GenBuffers_Func glGenBuffers_ptr = NULL;

  if (glGenBuffers_ptr == NULL) {
    glGenBuffers_ptr = (GL_GenBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenBuffers_ptr(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers) {
  typedef void (APIENTRY * GL_GenFramebuffers_Func)(GLsizei, GLuint *);
  static GL_GenFramebuffers_Func glGenFramebuffers_ptr = NULL;

  if (glGenFramebuffers_ptr == NULL) {
    glGenFramebuffers_ptr = (GL_GenFramebuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenFramebuffers_ptr(n, framebuffers);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines) {
  typedef void (APIENTRY * GL_GenProgramPipelines_Func)(GLsizei, GLuint *);
  static GL_GenProgramPipelines_Func glGenProgramPipelines_ptr = NULL;

  if (glGenProgramPipelines_ptr == NULL) {
    glGenProgramPipelines_ptr = (GL_GenProgramPipelines_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenProgramPipelines_ptr(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids) {
  typedef void (APIENTRY * GL_GenQueries_Func)(GLsizei, GLuint *);
  static GL_GenQueries_Func glGenQueries_ptr = NULL;

  if (glGenQueries_ptr == NULL) {
    glGenQueries_ptr = (GL_GenQueries_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenQueries_ptr(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) {
  typedef void (APIENTRY * GL_GenRenderbuffers_Func)(GLsizei, GLuint *);
  static GL_GenRenderbuffers_Func glGenRenderbuffers_ptr = NULL;

  if (glGenRenderbuffers_ptr == NULL) {
    glGenRenderbuffers_ptr = (GL_GenRenderbuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenRenderbuffers_ptr(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers) {
  typedef void (APIENTRY * GL_GenSamplers_Func)(GLsizei, GLuint *);
  static GL_GenSamplers_Func glGenSamplers_ptr = NULL;

  if (glGenSamplers_ptr == NULL) {
    glGenSamplers_ptr = (GL_GenSamplers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenSamplers_ptr(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures) {
  typedef void (APIENTRY * GL_GenTextures_Func)(GLsizei, GLuint *);
  static GL_GenTextures_Func glGenTextures_ptr = NULL;

  if (glGenTextures_ptr == NULL) {
    glGenTextures_ptr = (GL_GenTextures_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenTextures_ptr(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids) {
  typedef void (APIENTRY * GL_GenTransformFeedbacks_Func)(GLsizei, GLuint *);
  static GL_GenTransformFeedbacks_Func glGenTransformFeedbacks_ptr = NULL;

  if (glGenTransformFeedbacks_ptr == NULL) {
    glGenTransformFeedbacks_ptr = (GL_GenTransformFeedbacks_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenTransformFeedbacks_ptr(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays) {
  typedef void (APIENTRY * GL_GenVertexArrays_Func)(GLsizei, GLuint *);
  static GL_GenVertexArrays_Func glGenVertexArrays_ptr = NULL;

  if (glGenVertexArrays_ptr == NULL) {
    glGenVertexArrays_ptr = (GL_GenVertexArrays_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenVertexArrays_ptr(n, arrays);
}

void glGenerateMipmap(GLenum target) {
  typedef void (APIENTRY * GL_GenerateMipmap_Func)(GLenum);
  static GL_GenerateMipmap_Func glGenerateMipmap_ptr = NULL;

  if (glGenerateMipmap_ptr == NULL) {
    glGenerateMipmap_ptr = (GL_GenerateMipmap_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenerateMipmap_ptr(target);
}

void glGenerateTextureMipmap(GLuint texture) {
  typedef void (APIENTRY * GL_GenerateTextureMipmap_Func)(GLuint);
  static GL_GenerateTextureMipmap_Func glGenerateTextureMipmap_ptr = NULL;

  if (glGenerateTextureMipmap_ptr == NULL) {
    glGenerateTextureMipmap_ptr = (GL_GenerateTextureMipmap_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGenerateTextureMipmap_ptr(texture);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetActiveAtomicCounterBufferiv_Func)(GLuint, GLuint, GLenum, GLint *);
  static GL_GetActiveAtomicCounterBufferiv_Func glGetActiveAtomicCounterBufferiv_ptr = NULL;

  if (glGetActiveAtomicCounterBufferiv_ptr == NULL) {
    glGetActiveAtomicCounterBufferiv_ptr = (GL_GetActiveAtomicCounterBufferiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveAtomicCounterBufferiv_ptr(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
  typedef void (APIENTRY * GL_GetActiveAttrib_Func)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
  static GL_GetActiveAttrib_Func glGetActiveAttrib_ptr = NULL;

  if (glGetActiveAttrib_ptr == NULL) {
    glGetActiveAttrib_ptr = (GL_GetActiveAttrib_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveAttrib_ptr(program, index, bufSize, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name) {
  typedef void (APIENTRY * GL_GetActiveSubroutineName_Func)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetActiveSubroutineName_Func glGetActiveSubroutineName_ptr = NULL;

  if (glGetActiveSubroutineName_ptr == NULL) {
    glGetActiveSubroutineName_ptr = (GL_GetActiveSubroutineName_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveSubroutineName_ptr(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name) {
  typedef void (APIENTRY * GL_GetActiveSubroutineUniformName_Func)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetActiveSubroutineUniformName_Func glGetActiveSubroutineUniformName_ptr = NULL;

  if (glGetActiveSubroutineUniformName_ptr == NULL) {
    glGetActiveSubroutineUniformName_ptr = (GL_GetActiveSubroutineUniformName_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveSubroutineUniformName_ptr(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values) {
  typedef void (APIENTRY * GL_GetActiveSubroutineUniformiv_Func)(GLuint, GLenum, GLuint, GLenum, GLint *);
  static GL_GetActiveSubroutineUniformiv_Func glGetActiveSubroutineUniformiv_ptr = NULL;

  if (glGetActiveSubroutineUniformiv_ptr == NULL) {
    glGetActiveSubroutineUniformiv_ptr = (GL_GetActiveSubroutineUniformiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveSubroutineUniformiv_ptr(program, shadertype, index, pname, values);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
  typedef void (APIENTRY * GL_GetActiveUniform_Func)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
  static GL_GetActiveUniform_Func glGetActiveUniform_ptr = NULL;

  if (glGetActiveUniform_ptr == NULL) {
    glGetActiveUniform_ptr = (GL_GetActiveUniform_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveUniform_ptr(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) {
  typedef void (APIENTRY * GL_GetActiveUniformBlockName_Func)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetActiveUniformBlockName_Func glGetActiveUniformBlockName_ptr = NULL;

  if (glGetActiveUniformBlockName_ptr == NULL) {
    glGetActiveUniformBlockName_ptr = (GL_GetActiveUniformBlockName_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveUniformBlockName_ptr(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetActiveUniformBlockiv_Func)(GLuint, GLuint, GLenum, GLint *);
  static GL_GetActiveUniformBlockiv_Func glGetActiveUniformBlockiv_ptr = NULL;

  if (glGetActiveUniformBlockiv_ptr == NULL) {
    glGetActiveUniformBlockiv_ptr = (GL_GetActiveUniformBlockiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveUniformBlockiv_ptr(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) {
  typedef void (APIENTRY * GL_GetActiveUniformName_Func)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetActiveUniformName_Func glGetActiveUniformName_ptr = NULL;

  if (glGetActiveUniformName_ptr == NULL) {
    glGetActiveUniformName_ptr = (GL_GetActiveUniformName_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveUniformName_ptr(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetActiveUniformsiv_Func)(GLuint, GLsizei, const GLuint *, GLenum, GLint *);
  static GL_GetActiveUniformsiv_Func glGetActiveUniformsiv_ptr = NULL;

  if (glGetActiveUniformsiv_ptr == NULL) {
    glGetActiveUniformsiv_ptr = (GL_GetActiveUniformsiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetActiveUniformsiv_ptr(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) {
  typedef void (APIENTRY * GL_GetAttachedShaders_Func)(GLuint, GLsizei, GLsizei *, GLuint *);
  static GL_GetAttachedShaders_Func glGetAttachedShaders_ptr = NULL;

  if (glGetAttachedShaders_ptr == NULL) {
    glGetAttachedShaders_ptr = (GL_GetAttachedShaders_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetAttachedShaders_ptr(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetAttribLocation_Func)(GLuint, const GLchar *);
  static GL_GetAttribLocation_Func glGetAttribLocation_ptr = NULL;

  if (glGetAttribLocation_ptr == NULL) {
    glGetAttribLocation_ptr = (GL_GetAttribLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetAttribLocation_ptr(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data) {
  typedef void (APIENTRY * GL_GetBooleani_v_Func)(GLenum, GLuint, GLboolean *);
  static GL_GetBooleani_v_Func glGetBooleani_v_ptr = NULL;

  if (glGetBooleani_v_ptr == NULL) {
    glGetBooleani_v_ptr = (GL_GetBooleani_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBooleani_v_ptr(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data) {
  typedef void (APIENTRY * GL_GetBooleanv_Func)(GLenum, GLboolean *);
  static GL_GetBooleanv_Func glGetBooleanv_ptr = NULL;

  if (glGetBooleanv_ptr == NULL) {
    glGetBooleanv_ptr = (GL_GetBooleanv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBooleanv_ptr(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params) {
  typedef void (APIENTRY * GL_GetBufferParameteri64v_Func)(GLenum, GLenum, GLint64 *);
  static GL_GetBufferParameteri64v_Func glGetBufferParameteri64v_ptr = NULL;

  if (glGetBufferParameteri64v_ptr == NULL) {
    glGetBufferParameteri64v_ptr = (GL_GetBufferParameteri64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBufferParameteri64v_ptr(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetBufferParameteriv_Func)(GLenum, GLenum, GLint *);
  static GL_GetBufferParameteriv_Func glGetBufferParameteriv_ptr = NULL;

  if (glGetBufferParameteriv_ptr == NULL) {
    glGetBufferParameteriv_ptr = (GL_GetBufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBufferParameteriv_ptr(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params) {
  typedef void (APIENTRY * GL_GetBufferPointerv_Func)(GLenum, GLenum, void **);
  static GL_GetBufferPointerv_Func glGetBufferPointerv_ptr = NULL;

  if (glGetBufferPointerv_ptr == NULL) {
    glGetBufferPointerv_ptr = (GL_GetBufferPointerv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBufferPointerv_ptr(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data) {
  typedef void (APIENTRY * GL_GetBufferSubData_Func)(GLenum, GLintptr, GLsizeiptr, void *);
  static GL_GetBufferSubData_Func glGetBufferSubData_ptr = NULL;

  if (glGetBufferSubData_ptr == NULL) {
    glGetBufferSubData_ptr = (GL_GetBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetBufferSubData_ptr(target, offset, size, data);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img) {
  typedef void (APIENTRY * GL_GetCompressedTexImage_Func)(GLenum, GLint, void *);
  static GL_GetCompressedTexImage_Func glGetCompressedTexImage_ptr = NULL;

  if (glGetCompressedTexImage_ptr == NULL) {
    glGetCompressedTexImage_ptr = (GL_GetCompressedTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetCompressedTexImage_ptr(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetCompressedTextureImage_Func)(GLuint, GLint, GLsizei, void *);
  static GL_GetCompressedTextureImage_Func glGetCompressedTextureImage_ptr = NULL;

  if (glGetCompressedTextureImage_ptr == NULL) {
    glGetCompressedTextureImage_ptr = (GL_GetCompressedTextureImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetCompressedTextureImage_ptr(texture, level, bufSize, pixels);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetCompressedTextureSubImage_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *);
  static GL_GetCompressedTextureSubImage_Func glGetCompressedTextureSubImage_ptr = NULL;

  if (glGetCompressedTextureSubImage_ptr == NULL) {
    glGetCompressedTextureSubImage_ptr = (GL_GetCompressedTextureSubImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetCompressedTextureSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog) {
  typedef GLuint (APIENTRY * GL_GetDebugMessageLog_Func)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
  static GL_GetDebugMessageLog_Func glGetDebugMessageLog_ptr = NULL;

  if (glGetDebugMessageLog_ptr == NULL) {
    glGetDebugMessageLog_ptr = (GL_GetDebugMessageLog_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetDebugMessageLog_ptr(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data) {
  typedef void (APIENTRY * GL_GetDoublei_v_Func)(GLenum, GLuint, GLdouble *);
  static GL_GetDoublei_v_Func glGetDoublei_v_ptr = NULL;

  if (glGetDoublei_v_ptr == NULL) {
    glGetDoublei_v_ptr = (GL_GetDoublei_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetDoublei_v_ptr(target, index, data);
}

void glGetDoublev(GLenum pname, GLdouble * data) {
  typedef void (APIENTRY * GL_GetDoublev_Func)(GLenum, GLdouble *);
  static GL_GetDoublev_Func glGetDoublev_ptr = NULL;

  if (glGetDoublev_ptr == NULL) {
    glGetDoublev_ptr = (GL_GetDoublev_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetDoublev_ptr(pname, data);
}

GLenum glGetError() {
  typedef GLenum (APIENTRY * GL_GetError_Func)();
  static GL_GetError_Func glGetError_ptr = NULL;

  if (glGetError_ptr == NULL) {
    glGetError_ptr = (GL_GetError_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetError_ptr();
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data) {
  typedef void (APIENTRY * GL_GetFloati_v_Func)(GLenum, GLuint, GLfloat *);
  static GL_GetFloati_v_Func glGetFloati_v_ptr = NULL;

  if (glGetFloati_v_ptr == NULL) {
    glGetFloati_v_ptr = (GL_GetFloati_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFloati_v_ptr(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data) {
  typedef void (APIENTRY * GL_GetFloatv_Func)(GLenum, GLfloat *);
  static GL_GetFloatv_Func glGetFloatv_ptr = NULL;

  if (glGetFloatv_ptr == NULL) {
    glGetFloatv_ptr = (GL_GetFloatv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFloatv_ptr(pname, data);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetFragDataIndex_Func)(GLuint, const GLchar *);
  static GL_GetFragDataIndex_Func glGetFragDataIndex_ptr = NULL;

  if (glGetFragDataIndex_ptr == NULL) {
    glGetFragDataIndex_ptr = (GL_GetFragDataIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFragDataIndex_ptr(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetFragDataLocation_Func)(GLuint, const GLchar *);
  static GL_GetFragDataLocation_Func glGetFragDataLocation_ptr = NULL;

  if (glGetFragDataLocation_ptr == NULL) {
    glGetFragDataLocation_ptr = (GL_GetFragDataLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFragDataLocation_ptr(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetFramebufferAttachmentParameteriv_Func)(GLenum, GLenum, GLenum, GLint *);
  static GL_GetFramebufferAttachmentParameteriv_Func glGetFramebufferAttachmentParameteriv_ptr = NULL;

  if (glGetFramebufferAttachmentParameteriv_ptr == NULL) {
    glGetFramebufferAttachmentParameteriv_ptr = (GL_GetFramebufferAttachmentParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFramebufferAttachmentParameteriv_ptr(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetFramebufferParameteriv_Func)(GLenum, GLenum, GLint *);
  static GL_GetFramebufferParameteriv_Func glGetFramebufferParameteriv_ptr = NULL;

  if (glGetFramebufferParameteriv_ptr == NULL) {
    glGetFramebufferParameteriv_ptr = (GL_GetFramebufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetFramebufferParameteriv_ptr(target, pname, params);
}

GLenum glGetGraphicsResetStatus() {
  typedef GLenum (APIENTRY * GL_GetGraphicsResetStatus_Func)();
  static GL_GetGraphicsResetStatus_Func glGetGraphicsResetStatus_ptr = NULL;

  if (glGetGraphicsResetStatus_ptr == NULL) {
    glGetGraphicsResetStatus_ptr = (GL_GetGraphicsResetStatus_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetGraphicsResetStatus_ptr();
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data) {
  typedef void (APIENTRY * GL_GetInteger64i_v_Func)(GLenum, GLuint, GLint64 *);
  static GL_GetInteger64i_v_Func glGetInteger64i_v_ptr = NULL;

  if (glGetInteger64i_v_ptr == NULL) {
    glGetInteger64i_v_ptr = (GL_GetInteger64i_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetInteger64i_v_ptr(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data) {
  typedef void (APIENTRY * GL_GetInteger64v_Func)(GLenum, GLint64 *);
  static GL_GetInteger64v_Func glGetInteger64v_ptr = NULL;

  if (glGetInteger64v_ptr == NULL) {
    glGetInteger64v_ptr = (GL_GetInteger64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetInteger64v_ptr(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data) {
  typedef void (APIENTRY * GL_GetIntegeri_v_Func)(GLenum, GLuint, GLint *);
  static GL_GetIntegeri_v_Func glGetIntegeri_v_ptr = NULL;

  if (glGetIntegeri_v_ptr == NULL) {
    glGetIntegeri_v_ptr = (GL_GetIntegeri_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetIntegeri_v_ptr(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data) {
  typedef void (APIENTRY * GL_GetIntegerv_Func)(GLenum, GLint *);
  static GL_GetIntegerv_Func glGetIntegerv_ptr = NULL;

  if (glGetIntegerv_ptr == NULL) {
    glGetIntegerv_ptr = (GL_GetIntegerv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetIntegerv_ptr(pname, data);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params) {
  typedef void (APIENTRY * GL_GetInternalformati64v_Func)(GLenum, GLenum, GLenum, GLsizei, GLint64 *);
  static GL_GetInternalformati64v_Func glGetInternalformati64v_ptr = NULL;

  if (glGetInternalformati64v_ptr == NULL) {
    glGetInternalformati64v_ptr = (GL_GetInternalformati64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetInternalformati64v_ptr(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params) {
  typedef void (APIENTRY * GL_GetInternalformativ_Func)(GLenum, GLenum, GLenum, GLsizei, GLint *);
  static GL_GetInternalformativ_Func glGetInternalformativ_ptr = NULL;

  if (glGetInternalformativ_ptr == NULL) {
    glGetInternalformativ_ptr = (GL_GetInternalformativ_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetInternalformativ_ptr(target, internalformat, pname, bufSize, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val) {
  typedef void (APIENTRY * GL_GetMultisamplefv_Func)(GLenum, GLuint, GLfloat *);
  static GL_GetMultisamplefv_Func glGetMultisamplefv_ptr = NULL;

  if (glGetMultisamplefv_ptr == NULL) {
    glGetMultisamplefv_ptr = (GL_GetMultisamplefv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetMultisamplefv_ptr(pname, index, val);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params) {
  typedef void (APIENTRY * GL_GetNamedBufferParameteri64v_Func)(GLuint, GLenum, GLint64 *);
  static GL_GetNamedBufferParameteri64v_Func glGetNamedBufferParameteri64v_ptr = NULL;

  if (glGetNamedBufferParameteri64v_ptr == NULL) {
    glGetNamedBufferParameteri64v_ptr = (GL_GetNamedBufferParameteri64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedBufferParameteri64v_ptr(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetNamedBufferParameteriv_Func)(GLuint, GLenum, GLint *);
  static GL_GetNamedBufferParameteriv_Func glGetNamedBufferParameteriv_ptr = NULL;

  if (glGetNamedBufferParameteriv_ptr == NULL) {
    glGetNamedBufferParameteriv_ptr = (GL_GetNamedBufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedBufferParameteriv_ptr(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params) {
  typedef void (APIENTRY * GL_GetNamedBufferPointerv_Func)(GLuint, GLenum, void **);
  static GL_GetNamedBufferPointerv_Func glGetNamedBufferPointerv_ptr = NULL;

  if (glGetNamedBufferPointerv_ptr == NULL) {
    glGetNamedBufferPointerv_ptr = (GL_GetNamedBufferPointerv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedBufferPointerv_ptr(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizei size, void * data) {
  typedef void (APIENTRY * GL_GetNamedBufferSubData_Func)(GLuint, GLintptr, GLsizei, void *);
  static GL_GetNamedBufferSubData_Func glGetNamedBufferSubData_ptr = NULL;

  if (glGetNamedBufferSubData_ptr == NULL) {
    glGetNamedBufferSubData_ptr = (GL_GetNamedBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedBufferSubData_ptr(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetNamedFramebufferAttachmentParameteriv_Func)(GLuint, GLenum, GLenum, GLint *);
  static GL_GetNamedFramebufferAttachmentParameteriv_Func glGetNamedFramebufferAttachmentParameteriv_ptr = NULL;

  if (glGetNamedFramebufferAttachmentParameteriv_ptr == NULL) {
    glGetNamedFramebufferAttachmentParameteriv_ptr = (GL_GetNamedFramebufferAttachmentParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedFramebufferAttachmentParameteriv_ptr(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param) {
  typedef void (APIENTRY * GL_GetNamedFramebufferParameteriv_Func)(GLuint, GLenum, GLint *);
  static GL_GetNamedFramebufferParameteriv_Func glGetNamedFramebufferParameteriv_ptr = NULL;

  if (glGetNamedFramebufferParameteriv_ptr == NULL) {
    glGetNamedFramebufferParameteriv_ptr = (GL_GetNamedFramebufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedFramebufferParameteriv_ptr(framebuffer, pname, param);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetNamedRenderbufferParameteriv_Func)(GLuint, GLenum, GLint *);
  static GL_GetNamedRenderbufferParameteriv_Func glGetNamedRenderbufferParameteriv_ptr = NULL;

  if (glGetNamedRenderbufferParameteriv_ptr == NULL) {
    glGetNamedRenderbufferParameteriv_ptr = (GL_GetNamedRenderbufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetNamedRenderbufferParameteriv_ptr(renderbuffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label) {
  typedef void (APIENTRY * GL_GetObjectLabel_Func)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetObjectLabel_Func glGetObjectLabel_ptr = NULL;

  if (glGetObjectLabel_ptr == NULL) {
    glGetObjectLabel_ptr = (GL_GetObjectLabel_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetObjectLabel_ptr(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label) {
  typedef void (APIENTRY * GL_GetObjectPtrLabel_Func)(const void *, GLsizei, GLsizei *, GLchar *);
  static GL_GetObjectPtrLabel_Func glGetObjectPtrLabel_ptr = NULL;

  if (glGetObjectPtrLabel_ptr == NULL) {
    glGetObjectPtrLabel_ptr = (GL_GetObjectPtrLabel_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetObjectPtrLabel_ptr(ptr, bufSize, length, label);
}

void glGetPointerv(GLenum pname, void ** params) {
  typedef void (APIENTRY * GL_GetPointerv_Func)(GLenum, void **);
  static GL_GetPointerv_Func glGetPointerv_ptr = NULL;

  if (glGetPointerv_ptr == NULL) {
    glGetPointerv_ptr = (GL_GetPointerv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetPointerv_ptr(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary) {
  typedef void (APIENTRY * GL_GetProgramBinary_Func)(GLuint, GLsizei, GLsizei *, GLenum *, void *);
  static GL_GetProgramBinary_Func glGetProgramBinary_ptr = NULL;

  if (glGetProgramBinary_ptr == NULL) {
    glGetProgramBinary_ptr = (GL_GetProgramBinary_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramBinary_ptr(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
  typedef void (APIENTRY * GL_GetProgramInfoLog_Func)(GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetProgramInfoLog_Func glGetProgramInfoLog_ptr = NULL;

  if (glGetProgramInfoLog_ptr == NULL) {
    glGetProgramInfoLog_ptr = (GL_GetProgramInfoLog_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramInfoLog_ptr(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetProgramInterfaceiv_Func)(GLuint, GLenum, GLenum, GLint *);
  static GL_GetProgramInterfaceiv_Func glGetProgramInterfaceiv_ptr = NULL;

  if (glGetProgramInterfaceiv_ptr == NULL) {
    glGetProgramInterfaceiv_ptr = (GL_GetProgramInterfaceiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramInterfaceiv_ptr(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
  typedef void (APIENTRY * GL_GetProgramPipelineInfoLog_Func)(GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetProgramPipelineInfoLog_Func glGetProgramPipelineInfoLog_ptr = NULL;

  if (glGetProgramPipelineInfoLog_ptr == NULL) {
    glGetProgramPipelineInfoLog_ptr = (GL_GetProgramPipelineInfoLog_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramPipelineInfoLog_ptr(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetProgramPipelineiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetProgramPipelineiv_Func glGetProgramPipelineiv_ptr = NULL;

  if (glGetProgramPipelineiv_ptr == NULL) {
    glGetProgramPipelineiv_ptr = (GL_GetProgramPipelineiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramPipelineiv_ptr(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name) {
  typedef GLuint (APIENTRY * GL_GetProgramResourceIndex_Func)(GLuint, GLenum, const GLchar *);
  static GL_GetProgramResourceIndex_Func glGetProgramResourceIndex_ptr = NULL;

  if (glGetProgramResourceIndex_ptr == NULL) {
    glGetProgramResourceIndex_ptr = (GL_GetProgramResourceIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramResourceIndex_ptr(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetProgramResourceLocation_Func)(GLuint, GLenum, const GLchar *);
  static GL_GetProgramResourceLocation_Func glGetProgramResourceLocation_ptr = NULL;

  if (glGetProgramResourceLocation_ptr == NULL) {
    glGetProgramResourceLocation_ptr = (GL_GetProgramResourceLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramResourceLocation_ptr(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetProgramResourceLocationIndex_Func)(GLuint, GLenum, const GLchar *);
  static GL_GetProgramResourceLocationIndex_Func glGetProgramResourceLocationIndex_ptr = NULL;

  if (glGetProgramResourceLocationIndex_ptr == NULL) {
    glGetProgramResourceLocationIndex_ptr = (GL_GetProgramResourceLocationIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramResourceLocationIndex_ptr(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) {
  typedef void (APIENTRY * GL_GetProgramResourceName_Func)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetProgramResourceName_Func glGetProgramResourceName_ptr = NULL;

  if (glGetProgramResourceName_ptr == NULL) {
    glGetProgramResourceName_ptr = (GL_GetProgramResourceName_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramResourceName_ptr(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params) {
  typedef void (APIENTRY * GL_GetProgramResourceiv_Func)(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *);
  static GL_GetProgramResourceiv_Func glGetProgramResourceiv_ptr = NULL;

  if (glGetProgramResourceiv_ptr == NULL) {
    glGetProgramResourceiv_ptr = (GL_GetProgramResourceiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramResourceiv_ptr(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values) {
  typedef void (APIENTRY * GL_GetProgramStageiv_Func)(GLuint, GLenum, GLenum, GLint *);
  static GL_GetProgramStageiv_Func glGetProgramStageiv_ptr = NULL;

  if (glGetProgramStageiv_ptr == NULL) {
    glGetProgramStageiv_ptr = (GL_GetProgramStageiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramStageiv_ptr(program, shadertype, pname, values);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetProgramiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetProgramiv_Func glGetProgramiv_ptr = NULL;

  if (glGetProgramiv_ptr == NULL) {
    glGetProgramiv_ptr = (GL_GetProgramiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetProgramiv_ptr(program, pname, params);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetQueryIndexediv_Func)(GLenum, GLuint, GLenum, GLint *);
  static GL_GetQueryIndexediv_Func glGetQueryIndexediv_ptr = NULL;

  if (glGetQueryIndexediv_ptr == NULL) {
    glGetQueryIndexediv_ptr = (GL_GetQueryIndexediv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryIndexediv_ptr(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params) {
  typedef void (APIENTRY * GL_GetQueryObjecti64v_Func)(GLuint, GLenum, GLint64 *);
  static GL_GetQueryObjecti64v_Func glGetQueryObjecti64v_ptr = NULL;

  if (glGetQueryObjecti64v_ptr == NULL) {
    glGetQueryObjecti64v_ptr = (GL_GetQueryObjecti64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryObjecti64v_ptr(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetQueryObjectiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetQueryObjectiv_Func glGetQueryObjectiv_ptr = NULL;

  if (glGetQueryObjectiv_ptr == NULL) {
    glGetQueryObjectiv_ptr = (GL_GetQueryObjectiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryObjectiv_ptr(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params) {
  typedef void (APIENTRY * GL_GetQueryObjectui64v_Func)(GLuint, GLenum, GLuint64 *);
  static GL_GetQueryObjectui64v_Func glGetQueryObjectui64v_ptr = NULL;

  if (glGetQueryObjectui64v_ptr == NULL) {
    glGetQueryObjectui64v_ptr = (GL_GetQueryObjectui64v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryObjectui64v_ptr(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params) {
  typedef void (APIENTRY * GL_GetQueryObjectuiv_Func)(GLuint, GLenum, GLuint *);
  static GL_GetQueryObjectuiv_Func glGetQueryObjectuiv_ptr = NULL;

  if (glGetQueryObjectuiv_ptr == NULL) {
    glGetQueryObjectuiv_ptr = (GL_GetQueryObjectuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryObjectuiv_ptr(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetQueryiv_Func)(GLenum, GLenum, GLint *);
  static GL_GetQueryiv_Func glGetQueryiv_ptr = NULL;

  if (glGetQueryiv_ptr == NULL) {
    glGetQueryiv_ptr = (GL_GetQueryiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetQueryiv_ptr(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetRenderbufferParameteriv_Func)(GLenum, GLenum, GLint *);
  static GL_GetRenderbufferParameteriv_Func glGetRenderbufferParameteriv_ptr = NULL;

  if (glGetRenderbufferParameteriv_ptr == NULL) {
    glGetRenderbufferParameteriv_ptr = (GL_GetRenderbufferParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetRenderbufferParameteriv_ptr(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetSamplerParameterIiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetSamplerParameterIiv_Func glGetSamplerParameterIiv_ptr = NULL;

  if (glGetSamplerParameterIiv_ptr == NULL) {
    glGetSamplerParameterIiv_ptr = (GL_GetSamplerParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSamplerParameterIiv_ptr(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params) {
  typedef void (APIENTRY * GL_GetSamplerParameterIuiv_Func)(GLuint, GLenum, GLuint *);
  static GL_GetSamplerParameterIuiv_Func glGetSamplerParameterIuiv_ptr = NULL;

  if (glGetSamplerParameterIuiv_ptr == NULL) {
    glGetSamplerParameterIuiv_ptr = (GL_GetSamplerParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSamplerParameterIuiv_ptr(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetSamplerParameterfv_Func)(GLuint, GLenum, GLfloat *);
  static GL_GetSamplerParameterfv_Func glGetSamplerParameterfv_ptr = NULL;

  if (glGetSamplerParameterfv_ptr == NULL) {
    glGetSamplerParameterfv_ptr = (GL_GetSamplerParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSamplerParameterfv_ptr(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetSamplerParameteriv_Func)(GLuint, GLenum, GLint *);
  static GL_GetSamplerParameteriv_Func glGetSamplerParameteriv_ptr = NULL;

  if (glGetSamplerParameteriv_ptr == NULL) {
    glGetSamplerParameteriv_ptr = (GL_GetSamplerParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSamplerParameteriv_ptr(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
  typedef void (APIENTRY * GL_GetShaderInfoLog_Func)(GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetShaderInfoLog_Func glGetShaderInfoLog_ptr = NULL;

  if (glGetShaderInfoLog_ptr == NULL) {
    glGetShaderInfoLog_ptr = (GL_GetShaderInfoLog_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetShaderInfoLog_ptr(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) {
  typedef void (APIENTRY * GL_GetShaderPrecisionFormat_Func)(GLenum, GLenum, GLint *, GLint *);
  static GL_GetShaderPrecisionFormat_Func glGetShaderPrecisionFormat_ptr = NULL;

  if (glGetShaderPrecisionFormat_ptr == NULL) {
    glGetShaderPrecisionFormat_ptr = (GL_GetShaderPrecisionFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetShaderPrecisionFormat_ptr(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) {
  typedef void (APIENTRY * GL_GetShaderSource_Func)(GLuint, GLsizei, GLsizei *, GLchar *);
  static GL_GetShaderSource_Func glGetShaderSource_ptr = NULL;

  if (glGetShaderSource_ptr == NULL) {
    glGetShaderSource_ptr = (GL_GetShaderSource_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetShaderSource_ptr(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetShaderiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetShaderiv_Func glGetShaderiv_ptr = NULL;

  if (glGetShaderiv_ptr == NULL) {
    glGetShaderiv_ptr = (GL_GetShaderiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetShaderiv_ptr(shader, pname, params);
}

const GLubyte * glGetString(GLenum name) {
  typedef const GLubyte * (APIENTRY * GL_GetString_Func)(GLenum);
  static GL_GetString_Func glGetString_ptr = NULL;

  if (glGetString_ptr == NULL) {
    glGetString_ptr = (GL_GetString_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetString_ptr(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index) {
  typedef const GLubyte * (APIENTRY * GL_GetStringi_Func)(GLenum, GLuint);
  static GL_GetStringi_Func glGetStringi_ptr = NULL;

  if (glGetStringi_ptr == NULL) {
    glGetStringi_ptr = (GL_GetStringi_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetStringi_ptr(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name) {
  typedef GLuint (APIENTRY * GL_GetSubroutineIndex_Func)(GLuint, GLenum, const GLchar *);
  static GL_GetSubroutineIndex_Func glGetSubroutineIndex_ptr = NULL;

  if (glGetSubroutineIndex_ptr == NULL) {
    glGetSubroutineIndex_ptr = (GL_GetSubroutineIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSubroutineIndex_ptr(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetSubroutineUniformLocation_Func)(GLuint, GLenum, const GLchar *);
  static GL_GetSubroutineUniformLocation_Func glGetSubroutineUniformLocation_ptr = NULL;

  if (glGetSubroutineUniformLocation_ptr == NULL) {
    glGetSubroutineUniformLocation_ptr = (GL_GetSubroutineUniformLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSubroutineUniformLocation_ptr(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values) {
  typedef void (APIENTRY * GL_GetSynciv_Func)(GLsync, GLenum, GLsizei, GLsizei *, GLint *);
  static GL_GetSynciv_Func glGetSynciv_ptr = NULL;

  if (glGetSynciv_ptr == NULL) {
    glGetSynciv_ptr = (GL_GetSynciv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetSynciv_ptr(sync, pname, bufSize, length, values);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels) {
  typedef void (APIENTRY * GL_GetTexImage_Func)(GLenum, GLint, GLenum, GLenum, void *);
  static GL_GetTexImage_Func glGetTexImage_ptr = NULL;

  if (glGetTexImage_ptr == NULL) {
    glGetTexImage_ptr = (GL_GetTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexImage_ptr(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetTexLevelParameterfv_Func)(GLenum, GLint, GLenum, GLfloat *);
  static GL_GetTexLevelParameterfv_Func glGetTexLevelParameterfv_ptr = NULL;

  if (glGetTexLevelParameterfv_ptr == NULL) {
    glGetTexLevelParameterfv_ptr = (GL_GetTexLevelParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexLevelParameterfv_ptr(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTexLevelParameteriv_Func)(GLenum, GLint, GLenum, GLint *);
  static GL_GetTexLevelParameteriv_Func glGetTexLevelParameteriv_ptr = NULL;

  if (glGetTexLevelParameteriv_ptr == NULL) {
    glGetTexLevelParameteriv_ptr = (GL_GetTexLevelParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexLevelParameteriv_ptr(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTexParameterIiv_Func)(GLenum, GLenum, GLint *);
  static GL_GetTexParameterIiv_Func glGetTexParameterIiv_ptr = NULL;

  if (glGetTexParameterIiv_ptr == NULL) {
    glGetTexParameterIiv_ptr = (GL_GetTexParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexParameterIiv_ptr(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params) {
  typedef void (APIENTRY * GL_GetTexParameterIuiv_Func)(GLenum, GLenum, GLuint *);
  static GL_GetTexParameterIuiv_Func glGetTexParameterIuiv_ptr = NULL;

  if (glGetTexParameterIuiv_ptr == NULL) {
    glGetTexParameterIuiv_ptr = (GL_GetTexParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexParameterIuiv_ptr(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetTexParameterfv_Func)(GLenum, GLenum, GLfloat *);
  static GL_GetTexParameterfv_Func glGetTexParameterfv_ptr = NULL;

  if (glGetTexParameterfv_ptr == NULL) {
    glGetTexParameterfv_ptr = (GL_GetTexParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexParameterfv_ptr(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTexParameteriv_Func)(GLenum, GLenum, GLint *);
  static GL_GetTexParameteriv_Func glGetTexParameteriv_ptr = NULL;

  if (glGetTexParameteriv_ptr == NULL) {
    glGetTexParameteriv_ptr = (GL_GetTexParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTexParameteriv_ptr(target, pname, params);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetTextureImage_Func)(GLuint, GLint, GLenum, GLenum, GLsizei, void *);
  static GL_GetTextureImage_Func glGetTextureImage_ptr = NULL;

  if (glGetTextureImage_ptr == NULL) {
    glGetTextureImage_ptr = (GL_GetTextureImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureImage_ptr(texture, level, format, type, bufSize, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetTextureLevelParameterfv_Func)(GLuint, GLint, GLenum, GLfloat *);
  static GL_GetTextureLevelParameterfv_Func glGetTextureLevelParameterfv_ptr = NULL;

  if (glGetTextureLevelParameterfv_ptr == NULL) {
    glGetTextureLevelParameterfv_ptr = (GL_GetTextureLevelParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureLevelParameterfv_ptr(texture, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTextureLevelParameteriv_Func)(GLuint, GLint, GLenum, GLint *);
  static GL_GetTextureLevelParameteriv_Func glGetTextureLevelParameteriv_ptr = NULL;

  if (glGetTextureLevelParameteriv_ptr == NULL) {
    glGetTextureLevelParameteriv_ptr = (GL_GetTextureLevelParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureLevelParameteriv_ptr(texture, level, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTextureParameterIiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetTextureParameterIiv_Func glGetTextureParameterIiv_ptr = NULL;

  if (glGetTextureParameterIiv_ptr == NULL) {
    glGetTextureParameterIiv_ptr = (GL_GetTextureParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureParameterIiv_ptr(texture, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params) {
  typedef void (APIENTRY * GL_GetTextureParameterIuiv_Func)(GLuint, GLenum, GLuint *);
  static GL_GetTextureParameterIuiv_Func glGetTextureParameterIuiv_ptr = NULL;

  if (glGetTextureParameterIuiv_ptr == NULL) {
    glGetTextureParameterIuiv_ptr = (GL_GetTextureParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureParameterIuiv_ptr(texture, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetTextureParameterfv_Func)(GLuint, GLenum, GLfloat *);
  static GL_GetTextureParameterfv_Func glGetTextureParameterfv_ptr = NULL;

  if (glGetTextureParameterfv_ptr == NULL) {
    glGetTextureParameterfv_ptr = (GL_GetTextureParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureParameterfv_ptr(texture, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetTextureParameteriv_Func)(GLuint, GLenum, GLint *);
  static GL_GetTextureParameteriv_Func glGetTextureParameteriv_ptr = NULL;

  if (glGetTextureParameteriv_ptr == NULL) {
    glGetTextureParameteriv_ptr = (GL_GetTextureParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureParameteriv_ptr(texture, pname, params);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetTextureSubImage_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *);
  static GL_GetTextureSubImage_Func glGetTextureSubImage_ptr = NULL;

  if (glGetTextureSubImage_ptr == NULL) {
    glGetTextureSubImage_ptr = (GL_GetTextureSubImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTextureSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) {
  typedef void (APIENTRY * GL_GetTransformFeedbackVarying_Func)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *);
  static GL_GetTransformFeedbackVarying_Func glGetTransformFeedbackVarying_ptr = NULL;

  if (glGetTransformFeedbackVarying_ptr == NULL) {
    glGetTransformFeedbackVarying_ptr = (GL_GetTransformFeedbackVarying_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTransformFeedbackVarying_ptr(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param) {
  typedef void (APIENTRY * GL_GetTransformFeedbacki64_v_Func)(GLuint, GLenum, GLuint, GLint64 *);
  static GL_GetTransformFeedbacki64_v_Func glGetTransformFeedbacki64_v_ptr = NULL;

  if (glGetTransformFeedbacki64_v_ptr == NULL) {
    glGetTransformFeedbacki64_v_ptr = (GL_GetTransformFeedbacki64_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTransformFeedbacki64_v_ptr(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param) {
  typedef void (APIENTRY * GL_GetTransformFeedbacki_v_Func)(GLuint, GLenum, GLuint, GLint *);
  static GL_GetTransformFeedbacki_v_Func glGetTransformFeedbacki_v_ptr = NULL;

  if (glGetTransformFeedbacki_v_ptr == NULL) {
    glGetTransformFeedbacki_v_ptr = (GL_GetTransformFeedbacki_v_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTransformFeedbacki_v_ptr(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param) {
  typedef void (APIENTRY * GL_GetTransformFeedbackiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetTransformFeedbackiv_Func glGetTransformFeedbackiv_ptr = NULL;

  if (glGetTransformFeedbackiv_ptr == NULL) {
    glGetTransformFeedbackiv_ptr = (GL_GetTransformFeedbackiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetTransformFeedbackiv_ptr(xfb, pname, param);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName) {
  typedef GLuint (APIENTRY * GL_GetUniformBlockIndex_Func)(GLuint, const GLchar *);
  static GL_GetUniformBlockIndex_Func glGetUniformBlockIndex_ptr = NULL;

  if (glGetUniformBlockIndex_ptr == NULL) {
    glGetUniformBlockIndex_ptr = (GL_GetUniformBlockIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformBlockIndex_ptr(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices) {
  typedef void (APIENTRY * GL_GetUniformIndices_Func)(GLuint, GLsizei, const GLchar *const*, GLuint *);
  static GL_GetUniformIndices_Func glGetUniformIndices_ptr = NULL;

  if (glGetUniformIndices_ptr == NULL) {
    glGetUniformIndices_ptr = (GL_GetUniformIndices_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformIndices_ptr(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name) {
  typedef GLint (APIENTRY * GL_GetUniformLocation_Func)(GLuint, const GLchar *);
  static GL_GetUniformLocation_Func glGetUniformLocation_ptr = NULL;

  if (glGetUniformLocation_ptr == NULL) {
    glGetUniformLocation_ptr = (GL_GetUniformLocation_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformLocation_ptr(program, name);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params) {
  typedef void (APIENTRY * GL_GetUniformSubroutineuiv_Func)(GLenum, GLint, GLuint *);
  static GL_GetUniformSubroutineuiv_Func glGetUniformSubroutineuiv_ptr = NULL;

  if (glGetUniformSubroutineuiv_ptr == NULL) {
    glGetUniformSubroutineuiv_ptr = (GL_GetUniformSubroutineuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformSubroutineuiv_ptr(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params) {
  typedef void (APIENTRY * GL_GetUniformdv_Func)(GLuint, GLint, GLdouble *);
  static GL_GetUniformdv_Func glGetUniformdv_ptr = NULL;

  if (glGetUniformdv_ptr == NULL) {
    glGetUniformdv_ptr = (GL_GetUniformdv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformdv_ptr(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params) {
  typedef void (APIENTRY * GL_GetUniformfv_Func)(GLuint, GLint, GLfloat *);
  static GL_GetUniformfv_Func glGetUniformfv_ptr = NULL;

  if (glGetUniformfv_ptr == NULL) {
    glGetUniformfv_ptr = (GL_GetUniformfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformfv_ptr(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params) {
  typedef void (APIENTRY * GL_GetUniformiv_Func)(GLuint, GLint, GLint *);
  static GL_GetUniformiv_Func glGetUniformiv_ptr = NULL;

  if (glGetUniformiv_ptr == NULL) {
    glGetUniformiv_ptr = (GL_GetUniformiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformiv_ptr(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params) {
  typedef void (APIENTRY * GL_GetUniformuiv_Func)(GLuint, GLint, GLuint *);
  static GL_GetUniformuiv_Func glGetUniformuiv_ptr = NULL;

  if (glGetUniformuiv_ptr == NULL) {
    glGetUniformuiv_ptr = (GL_GetUniformuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetUniformuiv_ptr(program, location, params);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param) {
  typedef void (APIENTRY * GL_GetVertexArrayIndexed64iv_Func)(GLuint, GLuint, GLenum, GLint64 *);
  static GL_GetVertexArrayIndexed64iv_Func glGetVertexArrayIndexed64iv_ptr = NULL;

  if (glGetVertexArrayIndexed64iv_ptr == NULL) {
    glGetVertexArrayIndexed64iv_ptr = (GL_GetVertexArrayIndexed64iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexArrayIndexed64iv_ptr(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param) {
  typedef void (APIENTRY * GL_GetVertexArrayIndexediv_Func)(GLuint, GLuint, GLenum, GLint *);
  static GL_GetVertexArrayIndexediv_Func glGetVertexArrayIndexediv_ptr = NULL;

  if (glGetVertexArrayIndexediv_ptr == NULL) {
    glGetVertexArrayIndexediv_ptr = (GL_GetVertexArrayIndexediv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexArrayIndexediv_ptr(vaobj, index, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param) {
  typedef void (APIENTRY * GL_GetVertexArrayiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetVertexArrayiv_Func glGetVertexArrayiv_ptr = NULL;

  if (glGetVertexArrayiv_ptr == NULL) {
    glGetVertexArrayiv_ptr = (GL_GetVertexArrayiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexArrayiv_ptr(vaobj, pname, param);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetVertexAttribIiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetVertexAttribIiv_Func glGetVertexAttribIiv_ptr = NULL;

  if (glGetVertexAttribIiv_ptr == NULL) {
    glGetVertexAttribIiv_ptr = (GL_GetVertexAttribIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribIiv_ptr(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params) {
  typedef void (APIENTRY * GL_GetVertexAttribIuiv_Func)(GLuint, GLenum, GLuint *);
  static GL_GetVertexAttribIuiv_Func glGetVertexAttribIuiv_ptr = NULL;

  if (glGetVertexAttribIuiv_ptr == NULL) {
    glGetVertexAttribIuiv_ptr = (GL_GetVertexAttribIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribIuiv_ptr(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params) {
  typedef void (APIENTRY * GL_GetVertexAttribLdv_Func)(GLuint, GLenum, GLdouble *);
  static GL_GetVertexAttribLdv_Func glGetVertexAttribLdv_ptr = NULL;

  if (glGetVertexAttribLdv_ptr == NULL) {
    glGetVertexAttribLdv_ptr = (GL_GetVertexAttribLdv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribLdv_ptr(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer) {
  typedef void (APIENTRY * GL_GetVertexAttribPointerv_Func)(GLuint, GLenum, void **);
  static GL_GetVertexAttribPointerv_Func glGetVertexAttribPointerv_ptr = NULL;

  if (glGetVertexAttribPointerv_ptr == NULL) {
    glGetVertexAttribPointerv_ptr = (GL_GetVertexAttribPointerv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribPointerv_ptr(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params) {
  typedef void (APIENTRY * GL_GetVertexAttribdv_Func)(GLuint, GLenum, GLdouble *);
  static GL_GetVertexAttribdv_Func glGetVertexAttribdv_ptr = NULL;

  if (glGetVertexAttribdv_ptr == NULL) {
    glGetVertexAttribdv_ptr = (GL_GetVertexAttribdv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribdv_ptr(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) {
  typedef void (APIENTRY * GL_GetVertexAttribfv_Func)(GLuint, GLenum, GLfloat *);
  static GL_GetVertexAttribfv_Func glGetVertexAttribfv_ptr = NULL;

  if (glGetVertexAttribfv_ptr == NULL) {
    glGetVertexAttribfv_ptr = (GL_GetVertexAttribfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribfv_ptr(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) {
  typedef void (APIENTRY * GL_GetVertexAttribiv_Func)(GLuint, GLenum, GLint *);
  static GL_GetVertexAttribiv_Func glGetVertexAttribiv_ptr = NULL;

  if (glGetVertexAttribiv_ptr == NULL) {
    glGetVertexAttribiv_ptr = (GL_GetVertexAttribiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetVertexAttribiv_ptr(index, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table) {
  typedef void (APIENTRY * GL_GetnColorTable_Func)(GLenum, GLenum, GLenum, GLsizei, void *);
  static GL_GetnColorTable_Func glGetnColorTable_ptr = NULL;

  if (glGetnColorTable_ptr == NULL) {
    glGetnColorTable_ptr = (GL_GetnColorTable_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnColorTable_ptr(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetnCompressedTexImage_Func)(GLenum, GLint, GLsizei, void *);
  static GL_GetnCompressedTexImage_Func glGetnCompressedTexImage_ptr = NULL;

  if (glGetnCompressedTexImage_ptr == NULL) {
    glGetnCompressedTexImage_ptr = (GL_GetnCompressedTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnCompressedTexImage_ptr(target, lod, bufSize, pixels);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image) {
  typedef void (APIENTRY * GL_GetnConvolutionFilter_Func)(GLenum, GLenum, GLenum, GLsizei, void *);
  static GL_GetnConvolutionFilter_Func glGetnConvolutionFilter_ptr = NULL;

  if (glGetnConvolutionFilter_ptr == NULL) {
    glGetnConvolutionFilter_ptr = (GL_GetnConvolutionFilter_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnConvolutionFilter_ptr(target, format, type, bufSize, image);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values) {
  typedef void (APIENTRY * GL_GetnHistogram_Func)(GLenum, GLboolean, GLenum, GLenum, GLsizei, void *);
  static GL_GetnHistogram_Func glGetnHistogram_ptr = NULL;

  if (glGetnHistogram_ptr == NULL) {
    glGetnHistogram_ptr = (GL_GetnHistogram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnHistogram_ptr(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v) {
  typedef void (APIENTRY * GL_GetnMapdv_Func)(GLenum, GLenum, GLsizei, GLdouble *);
  static GL_GetnMapdv_Func glGetnMapdv_ptr = NULL;

  if (glGetnMapdv_ptr == NULL) {
    glGetnMapdv_ptr = (GL_GetnMapdv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnMapdv_ptr(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v) {
  typedef void (APIENTRY * GL_GetnMapfv_Func)(GLenum, GLenum, GLsizei, GLfloat *);
  static GL_GetnMapfv_Func glGetnMapfv_ptr = NULL;

  if (glGetnMapfv_ptr == NULL) {
    glGetnMapfv_ptr = (GL_GetnMapfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnMapfv_ptr(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v) {
  typedef void (APIENTRY * GL_GetnMapiv_Func)(GLenum, GLenum, GLsizei, GLint *);
  static GL_GetnMapiv_Func glGetnMapiv_ptr = NULL;

  if (glGetnMapiv_ptr == NULL) {
    glGetnMapiv_ptr = (GL_GetnMapiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnMapiv_ptr(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values) {
  typedef void (APIENTRY * GL_GetnMinmax_Func)(GLenum, GLboolean, GLenum, GLenum, GLsizei, void *);
  static GL_GetnMinmax_Func glGetnMinmax_ptr = NULL;

  if (glGetnMinmax_ptr == NULL) {
    glGetnMinmax_ptr = (GL_GetnMinmax_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnMinmax_ptr(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values) {
  typedef void (APIENTRY * GL_GetnPixelMapfv_Func)(GLenum, GLsizei, GLfloat *);
  static GL_GetnPixelMapfv_Func glGetnPixelMapfv_ptr = NULL;

  if (glGetnPixelMapfv_ptr == NULL) {
    glGetnPixelMapfv_ptr = (GL_GetnPixelMapfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnPixelMapfv_ptr(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values) {
  typedef void (APIENTRY * GL_GetnPixelMapuiv_Func)(GLenum, GLsizei, GLuint *);
  static GL_GetnPixelMapuiv_Func glGetnPixelMapuiv_ptr = NULL;

  if (glGetnPixelMapuiv_ptr == NULL) {
    glGetnPixelMapuiv_ptr = (GL_GetnPixelMapuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnPixelMapuiv_ptr(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values) {
  typedef void (APIENTRY * GL_GetnPixelMapusv_Func)(GLenum, GLsizei, GLushort *);
  static GL_GetnPixelMapusv_Func glGetnPixelMapusv_ptr = NULL;

  if (glGetnPixelMapusv_ptr == NULL) {
    glGetnPixelMapusv_ptr = (GL_GetnPixelMapusv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnPixelMapusv_ptr(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern) {
  typedef void (APIENTRY * GL_GetnPolygonStipple_Func)(GLsizei, GLubyte *);
  static GL_GetnPolygonStipple_Func glGetnPolygonStipple_ptr = NULL;

  if (glGetnPolygonStipple_ptr == NULL) {
    glGetnPolygonStipple_ptr = (GL_GetnPolygonStipple_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnPolygonStipple_ptr(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span) {
  typedef void (APIENTRY * GL_GetnSeparableFilter_Func)(GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *);
  static GL_GetnSeparableFilter_Func glGetnSeparableFilter_ptr = NULL;

  if (glGetnSeparableFilter_ptr == NULL) {
    glGetnSeparableFilter_ptr = (GL_GetnSeparableFilter_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnSeparableFilter_ptr(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) {
  typedef void (APIENTRY * GL_GetnTexImage_Func)(GLenum, GLint, GLenum, GLenum, GLsizei, void *);
  static GL_GetnTexImage_Func glGetnTexImage_ptr = NULL;

  if (glGetnTexImage_ptr == NULL) {
    glGetnTexImage_ptr = (GL_GetnTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnTexImage_ptr(target, level, format, type, bufSize, pixels);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params) {
  typedef void (APIENTRY * GL_GetnUniformdv_Func)(GLuint, GLint, GLsizei, GLdouble *);
  static GL_GetnUniformdv_Func glGetnUniformdv_ptr = NULL;

  if (glGetnUniformdv_ptr == NULL) {
    glGetnUniformdv_ptr = (GL_GetnUniformdv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnUniformdv_ptr(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params) {
  typedef void (APIENTRY * GL_GetnUniformfv_Func)(GLuint, GLint, GLsizei, GLfloat *);
  static GL_GetnUniformfv_Func glGetnUniformfv_ptr = NULL;

  if (glGetnUniformfv_ptr == NULL) {
    glGetnUniformfv_ptr = (GL_GetnUniformfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnUniformfv_ptr(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params) {
  typedef void (APIENTRY * GL_GetnUniformiv_Func)(GLuint, GLint, GLsizei, GLint *);
  static GL_GetnUniformiv_Func glGetnUniformiv_ptr = NULL;

  if (glGetnUniformiv_ptr == NULL) {
    glGetnUniformiv_ptr = (GL_GetnUniformiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnUniformiv_ptr(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params) {
  typedef void (APIENTRY * GL_GetnUniformuiv_Func)(GLuint, GLint, GLsizei, GLuint *);
  static GL_GetnUniformuiv_Func glGetnUniformuiv_ptr = NULL;

  if (glGetnUniformuiv_ptr == NULL) {
    glGetnUniformuiv_ptr = (GL_GetnUniformuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glGetnUniformuiv_ptr(program, location, bufSize, params);
}

void glHint(GLenum target, GLenum mode) {
  typedef void (APIENTRY * GL_Hint_Func)(GLenum, GLenum);
  static GL_Hint_Func glHint_ptr = NULL;

  if (glHint_ptr == NULL) {
    glHint_ptr = (GL_Hint_Func)SDL_GL_GetProcAddress(__func__);
  }

  glHint_ptr(target, mode);
}

void glInvalidateBufferData(GLuint buffer) {
  typedef void (APIENTRY * GL_InvalidateBufferData_Func)(GLuint);
  static GL_InvalidateBufferData_Func glInvalidateBufferData_ptr = NULL;

  if (glInvalidateBufferData_ptr == NULL) {
    glInvalidateBufferData_ptr = (GL_InvalidateBufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateBufferData_ptr(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) {
  typedef void (APIENTRY * GL_InvalidateBufferSubData_Func)(GLuint, GLintptr, GLsizeiptr);
  static GL_InvalidateBufferSubData_Func glInvalidateBufferSubData_ptr = NULL;

  if (glInvalidateBufferSubData_ptr == NULL) {
    glInvalidateBufferSubData_ptr = (GL_InvalidateBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateBufferSubData_ptr(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments) {
  typedef void (APIENTRY * GL_InvalidateFramebuffer_Func)(GLenum, GLsizei, const GLenum *);
  static GL_InvalidateFramebuffer_Func glInvalidateFramebuffer_ptr = NULL;

  if (glInvalidateFramebuffer_ptr == NULL) {
    glInvalidateFramebuffer_ptr = (GL_InvalidateFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateFramebuffer_ptr(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments) {
  typedef void (APIENTRY * GL_InvalidateNamedFramebufferData_Func)(GLuint, GLsizei, const GLenum *);
  static GL_InvalidateNamedFramebufferData_Func glInvalidateNamedFramebufferData_ptr = NULL;

  if (glInvalidateNamedFramebufferData_ptr == NULL) {
    glInvalidateNamedFramebufferData_ptr = (GL_InvalidateNamedFramebufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateNamedFramebufferData_ptr(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_InvalidateNamedFramebufferSubData_Func)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
  static GL_InvalidateNamedFramebufferSubData_Func glInvalidateNamedFramebufferSubData_ptr = NULL;

  if (glInvalidateNamedFramebufferSubData_ptr == NULL) {
    glInvalidateNamedFramebufferSubData_ptr = (GL_InvalidateNamedFramebufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateNamedFramebufferSubData_ptr(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_InvalidateSubFramebuffer_Func)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
  static GL_InvalidateSubFramebuffer_Func glInvalidateSubFramebuffer_ptr = NULL;

  if (glInvalidateSubFramebuffer_ptr == NULL) {
    glInvalidateSubFramebuffer_ptr = (GL_InvalidateSubFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateSubFramebuffer_ptr(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level) {
  typedef void (APIENTRY * GL_InvalidateTexImage_Func)(GLuint, GLint);
  static GL_InvalidateTexImage_Func glInvalidateTexImage_ptr = NULL;

  if (glInvalidateTexImage_ptr == NULL) {
    glInvalidateTexImage_ptr = (GL_InvalidateTexImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateTexImage_ptr(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
  typedef void (APIENTRY * GL_InvalidateTexSubImage_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
  static GL_InvalidateTexSubImage_Func glInvalidateTexSubImage_ptr = NULL;

  if (glInvalidateTexSubImage_ptr == NULL) {
    glInvalidateTexSubImage_ptr = (GL_InvalidateTexSubImage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glInvalidateTexSubImage_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsBuffer(GLuint buffer) {
  typedef GLboolean (APIENTRY * GL_IsBuffer_Func)(GLuint);
  static GL_IsBuffer_Func glIsBuffer_ptr = NULL;

  if (glIsBuffer_ptr == NULL) {
    glIsBuffer_ptr = (GL_IsBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsBuffer_ptr(buffer);
}

GLboolean glIsEnabled(GLenum cap) {
  typedef GLboolean (APIENTRY * GL_IsEnabled_Func)(GLenum);
  static GL_IsEnabled_Func glIsEnabled_ptr = NULL;

  if (glIsEnabled_ptr == NULL) {
    glIsEnabled_ptr = (GL_IsEnabled_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsEnabled_ptr(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index) {
  typedef GLboolean (APIENTRY * GL_IsEnabledi_Func)(GLenum, GLuint);
  static GL_IsEnabledi_Func glIsEnabledi_ptr = NULL;

  if (glIsEnabledi_ptr == NULL) {
    glIsEnabledi_ptr = (GL_IsEnabledi_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsEnabledi_ptr(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer) {
  typedef GLboolean (APIENTRY * GL_IsFramebuffer_Func)(GLuint);
  static GL_IsFramebuffer_Func glIsFramebuffer_ptr = NULL;

  if (glIsFramebuffer_ptr == NULL) {
    glIsFramebuffer_ptr = (GL_IsFramebuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsFramebuffer_ptr(framebuffer);
}

GLboolean glIsProgram(GLuint program) {
  typedef GLboolean (APIENTRY * GL_IsProgram_Func)(GLuint);
  static GL_IsProgram_Func glIsProgram_ptr = NULL;

  if (glIsProgram_ptr == NULL) {
    glIsProgram_ptr = (GL_IsProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsProgram_ptr(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline) {
  typedef GLboolean (APIENTRY * GL_IsProgramPipeline_Func)(GLuint);
  static GL_IsProgramPipeline_Func glIsProgramPipeline_ptr = NULL;

  if (glIsProgramPipeline_ptr == NULL) {
    glIsProgramPipeline_ptr = (GL_IsProgramPipeline_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsProgramPipeline_ptr(pipeline);
}

GLboolean glIsQuery(GLuint id) {
  typedef GLboolean (APIENTRY * GL_IsQuery_Func)(GLuint);
  static GL_IsQuery_Func glIsQuery_ptr = NULL;

  if (glIsQuery_ptr == NULL) {
    glIsQuery_ptr = (GL_IsQuery_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsQuery_ptr(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer) {
  typedef GLboolean (APIENTRY * GL_IsRenderbuffer_Func)(GLuint);
  static GL_IsRenderbuffer_Func glIsRenderbuffer_ptr = NULL;

  if (glIsRenderbuffer_ptr == NULL) {
    glIsRenderbuffer_ptr = (GL_IsRenderbuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsRenderbuffer_ptr(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler) {
  typedef GLboolean (APIENTRY * GL_IsSampler_Func)(GLuint);
  static GL_IsSampler_Func glIsSampler_ptr = NULL;

  if (glIsSampler_ptr == NULL) {
    glIsSampler_ptr = (GL_IsSampler_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsSampler_ptr(sampler);
}

GLboolean glIsShader(GLuint shader) {
  typedef GLboolean (APIENTRY * GL_IsShader_Func)(GLuint);
  static GL_IsShader_Func glIsShader_ptr = NULL;

  if (glIsShader_ptr == NULL) {
    glIsShader_ptr = (GL_IsShader_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsShader_ptr(shader);
}

GLboolean glIsSync(GLsync sync) {
  typedef GLboolean (APIENTRY * GL_IsSync_Func)(GLsync);
  static GL_IsSync_Func glIsSync_ptr = NULL;

  if (glIsSync_ptr == NULL) {
    glIsSync_ptr = (GL_IsSync_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsSync_ptr(sync);
}

GLboolean glIsTexture(GLuint texture) {
  typedef GLboolean (APIENTRY * GL_IsTexture_Func)(GLuint);
  static GL_IsTexture_Func glIsTexture_ptr = NULL;

  if (glIsTexture_ptr == NULL) {
    glIsTexture_ptr = (GL_IsTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsTexture_ptr(texture);
}

GLboolean glIsTransformFeedback(GLuint id) {
  typedef GLboolean (APIENTRY * GL_IsTransformFeedback_Func)(GLuint);
  static GL_IsTransformFeedback_Func glIsTransformFeedback_ptr = NULL;

  if (glIsTransformFeedback_ptr == NULL) {
    glIsTransformFeedback_ptr = (GL_IsTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsTransformFeedback_ptr(id);
}

GLboolean glIsVertexArray(GLuint array) {
  typedef GLboolean (APIENTRY * GL_IsVertexArray_Func)(GLuint);
  static GL_IsVertexArray_Func glIsVertexArray_ptr = NULL;

  if (glIsVertexArray_ptr == NULL) {
    glIsVertexArray_ptr = (GL_IsVertexArray_Func)SDL_GL_GetProcAddress(__func__);
  }

  glIsVertexArray_ptr(array);
}

void glLineWidth(GLfloat width) {
  typedef void (APIENTRY * GL_LineWidth_Func)(GLfloat);
  static GL_LineWidth_Func glLineWidth_ptr = NULL;

  if (glLineWidth_ptr == NULL) {
    glLineWidth_ptr = (GL_LineWidth_Func)SDL_GL_GetProcAddress(__func__);
  }

  glLineWidth_ptr(width);
}

void glLinkProgram(GLuint program) {
  typedef void (APIENTRY * GL_LinkProgram_Func)(GLuint);
  static GL_LinkProgram_Func glLinkProgram_ptr = NULL;

  if (glLinkProgram_ptr == NULL) {
    glLinkProgram_ptr = (GL_LinkProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glLinkProgram_ptr(program);
}

void glLogicOp(GLenum opcode) {
  typedef void (APIENTRY * GL_LogicOp_Func)(GLenum);
  static GL_LogicOp_Func glLogicOp_ptr = NULL;

  if (glLogicOp_ptr == NULL) {
    glLogicOp_ptr = (GL_LogicOp_Func)SDL_GL_GetProcAddress(__func__);
  }

  glLogicOp_ptr(opcode);
}

void * glMapBuffer(GLenum target, GLenum access) {
  typedef void * (APIENTRY * GL_MapBuffer_Func)(GLenum, GLenum);
  static GL_MapBuffer_Func glMapBuffer_ptr = NULL;

  if (glMapBuffer_ptr == NULL) {
    glMapBuffer_ptr = (GL_MapBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMapBuffer_ptr(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
  typedef void * (APIENTRY * GL_MapBufferRange_Func)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
  static GL_MapBufferRange_Func glMapBufferRange_ptr = NULL;

  if (glMapBufferRange_ptr == NULL) {
    glMapBufferRange_ptr = (GL_MapBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMapBufferRange_ptr(target, offset, length, access);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access) {
  typedef void * (APIENTRY * GL_MapNamedBuffer_Func)(GLuint, GLenum);
  static GL_MapNamedBuffer_Func glMapNamedBuffer_ptr = NULL;

  if (glMapNamedBuffer_ptr == NULL) {
    glMapNamedBuffer_ptr = (GL_MapNamedBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMapNamedBuffer_ptr(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizei length, GLbitfield access) {
  typedef void * (APIENTRY * GL_MapNamedBufferRange_Func)(GLuint, GLintptr, GLsizei, GLbitfield);
  static GL_MapNamedBufferRange_Func glMapNamedBufferRange_ptr = NULL;

  if (glMapNamedBufferRange_ptr == NULL) {
    glMapNamedBufferRange_ptr = (GL_MapNamedBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMapNamedBufferRange_ptr(buffer, offset, length, access);
}

void glMemoryBarrier(GLbitfield barriers) {
  typedef void (APIENTRY * GL_MemoryBarrier_Func)(GLbitfield);
  static GL_MemoryBarrier_Func glMemoryBarrier_ptr = NULL;

  if (glMemoryBarrier_ptr == NULL) {
    glMemoryBarrier_ptr = (GL_MemoryBarrier_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMemoryBarrier_ptr(barriers);
}

void glMemoryBarrierByRegion(GLbitfield barriers) {
  typedef void (APIENTRY * GL_MemoryBarrierByRegion_Func)(GLbitfield);
  static GL_MemoryBarrierByRegion_Func glMemoryBarrierByRegion_ptr = NULL;

  if (glMemoryBarrierByRegion_ptr == NULL) {
    glMemoryBarrierByRegion_ptr = (GL_MemoryBarrierByRegion_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMemoryBarrierByRegion_ptr(barriers);
}

void glMinSampleShading(GLfloat value) {
  typedef void (APIENTRY * GL_MinSampleShading_Func)(GLfloat);
  static GL_MinSampleShading_Func glMinSampleShading_ptr = NULL;

  if (glMinSampleShading_ptr == NULL) {
    glMinSampleShading_ptr = (GL_MinSampleShading_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMinSampleShading_ptr(value);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) {
  typedef void (APIENTRY * GL_MultiDrawArrays_Func)(GLenum, const GLint *, const GLsizei *, GLsizei);
  static GL_MultiDrawArrays_Func glMultiDrawArrays_ptr = NULL;

  if (glMultiDrawArrays_ptr == NULL) {
    glMultiDrawArrays_ptr = (GL_MultiDrawArrays_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiDrawArrays_ptr(mode, first, count, drawcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride) {
  typedef void (APIENTRY * GL_MultiDrawArraysIndirect_Func)(GLenum, const void *, GLsizei, GLsizei);
  static GL_MultiDrawArraysIndirect_Func glMultiDrawArraysIndirect_ptr = NULL;

  if (glMultiDrawArraysIndirect_ptr == NULL) {
    glMultiDrawArraysIndirect_ptr = (GL_MultiDrawArraysIndirect_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiDrawArraysIndirect_ptr(mode, indirect, drawcount, stride);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount) {
  typedef void (APIENTRY * GL_MultiDrawElements_Func)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei);
  static GL_MultiDrawElements_Func glMultiDrawElements_ptr = NULL;

  if (glMultiDrawElements_ptr == NULL) {
    glMultiDrawElements_ptr = (GL_MultiDrawElements_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiDrawElements_ptr(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex) {
  typedef void (APIENTRY * GL_MultiDrawElementsBaseVertex_Func)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *);
  static GL_MultiDrawElementsBaseVertex_Func glMultiDrawElementsBaseVertex_ptr = NULL;

  if (glMultiDrawElementsBaseVertex_ptr == NULL) {
    glMultiDrawElementsBaseVertex_ptr = (GL_MultiDrawElementsBaseVertex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiDrawElementsBaseVertex_ptr(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride) {
  typedef void (APIENTRY * GL_MultiDrawElementsIndirect_Func)(GLenum, GLenum, const void *, GLsizei, GLsizei);
  static GL_MultiDrawElementsIndirect_Func glMultiDrawElementsIndirect_ptr = NULL;

  if (glMultiDrawElementsIndirect_ptr == NULL) {
    glMultiDrawElementsIndirect_ptr = (GL_MultiDrawElementsIndirect_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiDrawElementsIndirect_ptr(mode, type, indirect, drawcount, stride);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP1ui_Func)(GLenum, GLenum, GLuint);
  static GL_MultiTexCoordP1ui_Func glMultiTexCoordP1ui_ptr = NULL;

  if (glMultiTexCoordP1ui_ptr == NULL) {
    glMultiTexCoordP1ui_ptr = (GL_MultiTexCoordP1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP1ui_ptr(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP1uiv_Func)(GLenum, GLenum, const GLuint *);
  static GL_MultiTexCoordP1uiv_Func glMultiTexCoordP1uiv_ptr = NULL;

  if (glMultiTexCoordP1uiv_ptr == NULL) {
    glMultiTexCoordP1uiv_ptr = (GL_MultiTexCoordP1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP1uiv_ptr(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP2ui_Func)(GLenum, GLenum, GLuint);
  static GL_MultiTexCoordP2ui_Func glMultiTexCoordP2ui_ptr = NULL;

  if (glMultiTexCoordP2ui_ptr == NULL) {
    glMultiTexCoordP2ui_ptr = (GL_MultiTexCoordP2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP2ui_ptr(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP2uiv_Func)(GLenum, GLenum, const GLuint *);
  static GL_MultiTexCoordP2uiv_Func glMultiTexCoordP2uiv_ptr = NULL;

  if (glMultiTexCoordP2uiv_ptr == NULL) {
    glMultiTexCoordP2uiv_ptr = (GL_MultiTexCoordP2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP2uiv_ptr(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP3ui_Func)(GLenum, GLenum, GLuint);
  static GL_MultiTexCoordP3ui_Func glMultiTexCoordP3ui_ptr = NULL;

  if (glMultiTexCoordP3ui_ptr == NULL) {
    glMultiTexCoordP3ui_ptr = (GL_MultiTexCoordP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP3ui_ptr(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP3uiv_Func)(GLenum, GLenum, const GLuint *);
  static GL_MultiTexCoordP3uiv_Func glMultiTexCoordP3uiv_ptr = NULL;

  if (glMultiTexCoordP3uiv_ptr == NULL) {
    glMultiTexCoordP3uiv_ptr = (GL_MultiTexCoordP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP3uiv_ptr(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP4ui_Func)(GLenum, GLenum, GLuint);
  static GL_MultiTexCoordP4ui_Func glMultiTexCoordP4ui_ptr = NULL;

  if (glMultiTexCoordP4ui_ptr == NULL) {
    glMultiTexCoordP4ui_ptr = (GL_MultiTexCoordP4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP4ui_ptr(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_MultiTexCoordP4uiv_Func)(GLenum, GLenum, const GLuint *);
  static GL_MultiTexCoordP4uiv_Func glMultiTexCoordP4uiv_ptr = NULL;

  if (glMultiTexCoordP4uiv_ptr == NULL) {
    glMultiTexCoordP4uiv_ptr = (GL_MultiTexCoordP4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glMultiTexCoordP4uiv_ptr(texture, type, coords);
}

void glNamedBufferData(GLuint buffer, GLsizei size, const void * data, GLenum usage) {
  typedef void (APIENTRY * GL_NamedBufferData_Func)(GLuint, GLsizei, const void *, GLenum);
  static GL_NamedBufferData_Func glNamedBufferData_ptr = NULL;

  if (glNamedBufferData_ptr == NULL) {
    glNamedBufferData_ptr = (GL_NamedBufferData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedBufferData_ptr(buffer, size, data, usage);
}

void glNamedBufferStorage(GLuint buffer, GLsizei size, const void * data, GLbitfield flags) {
  typedef void (APIENTRY * GL_NamedBufferStorage_Func)(GLuint, GLsizei, const void *, GLbitfield);
  static GL_NamedBufferStorage_Func glNamedBufferStorage_ptr = NULL;

  if (glNamedBufferStorage_ptr == NULL) {
    glNamedBufferStorage_ptr = (GL_NamedBufferStorage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedBufferStorage_ptr(buffer, size, data, flags);
}

void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizei size, const void * data) {
  typedef void (APIENTRY * GL_NamedBufferSubData_Func)(GLuint, GLintptr, GLsizei, const void *);
  static GL_NamedBufferSubData_Func glNamedBufferSubData_ptr = NULL;

  if (glNamedBufferSubData_ptr == NULL) {
    glNamedBufferSubData_ptr = (GL_NamedBufferSubData_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedBufferSubData_ptr(buffer, offset, size, data);
}

void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf) {
  typedef void (APIENTRY * GL_NamedFramebufferDrawBuffer_Func)(GLuint, GLenum);
  static GL_NamedFramebufferDrawBuffer_Func glNamedFramebufferDrawBuffer_ptr = NULL;

  if (glNamedFramebufferDrawBuffer_ptr == NULL) {
    glNamedFramebufferDrawBuffer_ptr = (GL_NamedFramebufferDrawBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferDrawBuffer_ptr(framebuffer, buf);
}

void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs) {
  typedef void (APIENTRY * GL_NamedFramebufferDrawBuffers_Func)(GLuint, GLsizei, const GLenum *);
  static GL_NamedFramebufferDrawBuffers_Func glNamedFramebufferDrawBuffers_ptr = NULL;

  if (glNamedFramebufferDrawBuffers_ptr == NULL) {
    glNamedFramebufferDrawBuffers_ptr = (GL_NamedFramebufferDrawBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferDrawBuffers_ptr(framebuffer, n, bufs);
}

void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_NamedFramebufferParameteri_Func)(GLuint, GLenum, GLint);
  static GL_NamedFramebufferParameteri_Func glNamedFramebufferParameteri_ptr = NULL;

  if (glNamedFramebufferParameteri_ptr == NULL) {
    glNamedFramebufferParameteri_ptr = (GL_NamedFramebufferParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferParameteri_ptr(framebuffer, pname, param);
}

void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src) {
  typedef void (APIENTRY * GL_NamedFramebufferReadBuffer_Func)(GLuint, GLenum);
  static GL_NamedFramebufferReadBuffer_Func glNamedFramebufferReadBuffer_ptr = NULL;

  if (glNamedFramebufferReadBuffer_ptr == NULL) {
    glNamedFramebufferReadBuffer_ptr = (GL_NamedFramebufferReadBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferReadBuffer_ptr(framebuffer, src);
}

void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
  typedef void (APIENTRY * GL_NamedFramebufferRenderbuffer_Func)(GLuint, GLenum, GLenum, GLuint);
  static GL_NamedFramebufferRenderbuffer_Func glNamedFramebufferRenderbuffer_ptr = NULL;

  if (glNamedFramebufferRenderbuffer_ptr == NULL) {
    glNamedFramebufferRenderbuffer_ptr = (GL_NamedFramebufferRenderbuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferRenderbuffer_ptr(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) {
  typedef void (APIENTRY * GL_NamedFramebufferTexture_Func)(GLuint, GLenum, GLuint, GLint);
  static GL_NamedFramebufferTexture_Func glNamedFramebufferTexture_ptr = NULL;

  if (glNamedFramebufferTexture_ptr == NULL) {
    glNamedFramebufferTexture_ptr = (GL_NamedFramebufferTexture_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferTexture_ptr(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) {
  typedef void (APIENTRY * GL_NamedFramebufferTextureLayer_Func)(GLuint, GLenum, GLuint, GLint, GLint);
  static GL_NamedFramebufferTextureLayer_Func glNamedFramebufferTextureLayer_ptr = NULL;

  if (glNamedFramebufferTextureLayer_ptr == NULL) {
    glNamedFramebufferTextureLayer_ptr = (GL_NamedFramebufferTextureLayer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedFramebufferTextureLayer_ptr(framebuffer, attachment, texture, level, layer);
}

void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_NamedRenderbufferStorage_Func)(GLuint, GLenum, GLsizei, GLsizei);
  static GL_NamedRenderbufferStorage_Func glNamedRenderbufferStorage_ptr = NULL;

  if (glNamedRenderbufferStorage_ptr == NULL) {
    glNamedRenderbufferStorage_ptr = (GL_NamedRenderbufferStorage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedRenderbufferStorage_ptr(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_NamedRenderbufferStorageMultisample_Func)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
  static GL_NamedRenderbufferStorageMultisample_Func glNamedRenderbufferStorageMultisample_ptr = NULL;

  if (glNamedRenderbufferStorageMultisample_ptr == NULL) {
    glNamedRenderbufferStorageMultisample_ptr = (GL_NamedRenderbufferStorageMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNamedRenderbufferStorageMultisample_ptr(renderbuffer, samples, internalformat, width, height);
}

void glNormalP3ui(GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_NormalP3ui_Func)(GLenum, GLuint);
  static GL_NormalP3ui_Func glNormalP3ui_ptr = NULL;

  if (glNormalP3ui_ptr == NULL) {
    glNormalP3ui_ptr = (GL_NormalP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNormalP3ui_ptr(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_NormalP3uiv_Func)(GLenum, const GLuint *);
  static GL_NormalP3uiv_Func glNormalP3uiv_ptr = NULL;

  if (glNormalP3uiv_ptr == NULL) {
    glNormalP3uiv_ptr = (GL_NormalP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glNormalP3uiv_ptr(type, coords);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label) {
  typedef void (APIENTRY * GL_ObjectLabel_Func)(GLenum, GLuint, GLsizei, const GLchar *);
  static GL_ObjectLabel_Func glObjectLabel_ptr = NULL;

  if (glObjectLabel_ptr == NULL) {
    glObjectLabel_ptr = (GL_ObjectLabel_Func)SDL_GL_GetProcAddress(__func__);
  }

  glObjectLabel_ptr(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label) {
  typedef void (APIENTRY * GL_ObjectPtrLabel_Func)(const void *, GLsizei, const GLchar *);
  static GL_ObjectPtrLabel_Func glObjectPtrLabel_ptr = NULL;

  if (glObjectPtrLabel_ptr == NULL) {
    glObjectPtrLabel_ptr = (GL_ObjectPtrLabel_Func)SDL_GL_GetProcAddress(__func__);
  }

  glObjectPtrLabel_ptr(ptr, length, label);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values) {
  typedef void (APIENTRY * GL_PatchParameterfv_Func)(GLenum, const GLfloat *);
  static GL_PatchParameterfv_Func glPatchParameterfv_ptr = NULL;

  if (glPatchParameterfv_ptr == NULL) {
    glPatchParameterfv_ptr = (GL_PatchParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPatchParameterfv_ptr(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value) {
  typedef void (APIENTRY * GL_PatchParameteri_Func)(GLenum, GLint);
  static GL_PatchParameteri_Func glPatchParameteri_ptr = NULL;

  if (glPatchParameteri_ptr == NULL) {
    glPatchParameteri_ptr = (GL_PatchParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPatchParameteri_ptr(pname, value);
}

void glPauseTransformFeedback() {
  typedef void (APIENTRY * GL_PauseTransformFeedback_Func)();
  static GL_PauseTransformFeedback_Func glPauseTransformFeedback_ptr = NULL;

  if (glPauseTransformFeedback_ptr == NULL) {
    glPauseTransformFeedback_ptr = (GL_PauseTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPauseTransformFeedback_ptr();
}

void glPixelStoref(GLenum pname, GLfloat param) {
  typedef void (APIENTRY * GL_PixelStoref_Func)(GLenum, GLfloat);
  static GL_PixelStoref_Func glPixelStoref_ptr = NULL;

  if (glPixelStoref_ptr == NULL) {
    glPixelStoref_ptr = (GL_PixelStoref_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPixelStoref_ptr(pname, param);
}

void glPixelStorei(GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_PixelStorei_Func)(GLenum, GLint);
  static GL_PixelStorei_Func glPixelStorei_ptr = NULL;

  if (glPixelStorei_ptr == NULL) {
    glPixelStorei_ptr = (GL_PixelStorei_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPixelStorei_ptr(pname, param);
}

void glPointParameterf(GLenum pname, GLfloat param) {
  typedef void (APIENTRY * GL_PointParameterf_Func)(GLenum, GLfloat);
  static GL_PointParameterf_Func glPointParameterf_ptr = NULL;

  if (glPointParameterf_ptr == NULL) {
    glPointParameterf_ptr = (GL_PointParameterf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPointParameterf_ptr(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params) {
  typedef void (APIENTRY * GL_PointParameterfv_Func)(GLenum, const GLfloat *);
  static GL_PointParameterfv_Func glPointParameterfv_ptr = NULL;

  if (glPointParameterfv_ptr == NULL) {
    glPointParameterfv_ptr = (GL_PointParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPointParameterfv_ptr(pname, params);
}

void glPointParameteri(GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_PointParameteri_Func)(GLenum, GLint);
  static GL_PointParameteri_Func glPointParameteri_ptr = NULL;

  if (glPointParameteri_ptr == NULL) {
    glPointParameteri_ptr = (GL_PointParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPointParameteri_ptr(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params) {
  typedef void (APIENTRY * GL_PointParameteriv_Func)(GLenum, const GLint *);
  static GL_PointParameteriv_Func glPointParameteriv_ptr = NULL;

  if (glPointParameteriv_ptr == NULL) {
    glPointParameteriv_ptr = (GL_PointParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPointParameteriv_ptr(pname, params);
}

void glPointSize(GLfloat size) {
  typedef void (APIENTRY * GL_PointSize_Func)(GLfloat);
  static GL_PointSize_Func glPointSize_ptr = NULL;

  if (glPointSize_ptr == NULL) {
    glPointSize_ptr = (GL_PointSize_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPointSize_ptr(size);
}

void glPolygonMode(GLenum face, GLenum mode) {
  typedef void (APIENTRY * GL_PolygonMode_Func)(GLenum, GLenum);
  static GL_PolygonMode_Func glPolygonMode_ptr = NULL;

  if (glPolygonMode_ptr == NULL) {
    glPolygonMode_ptr = (GL_PolygonMode_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPolygonMode_ptr(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units) {
  typedef void (APIENTRY * GL_PolygonOffset_Func)(GLfloat, GLfloat);
  static GL_PolygonOffset_Func glPolygonOffset_ptr = NULL;

  if (glPolygonOffset_ptr == NULL) {
    glPolygonOffset_ptr = (GL_PolygonOffset_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPolygonOffset_ptr(factor, units);
}

void glPopDebugGroup() {
  typedef void (APIENTRY * GL_PopDebugGroup_Func)();
  static GL_PopDebugGroup_Func glPopDebugGroup_ptr = NULL;

  if (glPopDebugGroup_ptr == NULL) {
    glPopDebugGroup_ptr = (GL_PopDebugGroup_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPopDebugGroup_ptr();
}

void glPrimitiveRestartIndex(GLuint index) {
  typedef void (APIENTRY * GL_PrimitiveRestartIndex_Func)(GLuint);
  static GL_PrimitiveRestartIndex_Func glPrimitiveRestartIndex_ptr = NULL;

  if (glPrimitiveRestartIndex_ptr == NULL) {
    glPrimitiveRestartIndex_ptr = (GL_PrimitiveRestartIndex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPrimitiveRestartIndex_ptr(index);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length) {
  typedef void (APIENTRY * GL_ProgramBinary_Func)(GLuint, GLenum, const void *, GLsizei);
  static GL_ProgramBinary_Func glProgramBinary_ptr = NULL;

  if (glProgramBinary_ptr == NULL) {
    glProgramBinary_ptr = (GL_ProgramBinary_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramBinary_ptr(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value) {
  typedef void (APIENTRY * GL_ProgramParameteri_Func)(GLuint, GLenum, GLint);
  static GL_ProgramParameteri_Func glProgramParameteri_ptr = NULL;

  if (glProgramParameteri_ptr == NULL) {
    glProgramParameteri_ptr = (GL_ProgramParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramParameteri_ptr(program, pname, value);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0) {
  typedef void (APIENTRY * GL_ProgramUniform1d_Func)(GLuint, GLint, GLdouble);
  static GL_ProgramUniform1d_Func glProgramUniform1d_ptr = NULL;

  if (glProgramUniform1d_ptr == NULL) {
    glProgramUniform1d_ptr = (GL_ProgramUniform1d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1d_ptr(program, location, v0);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniform1dv_Func)(GLuint, GLint, GLsizei, const GLdouble *);
  static GL_ProgramUniform1dv_Func glProgramUniform1dv_ptr = NULL;

  if (glProgramUniform1dv_ptr == NULL) {
    glProgramUniform1dv_ptr = (GL_ProgramUniform1dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1dv_ptr(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0) {
  typedef void (APIENTRY * GL_ProgramUniform1f_Func)(GLuint, GLint, GLfloat);
  static GL_ProgramUniform1f_Func glProgramUniform1f_ptr = NULL;

  if (glProgramUniform1f_ptr == NULL) {
    glProgramUniform1f_ptr = (GL_ProgramUniform1f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1f_ptr(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniform1fv_Func)(GLuint, GLint, GLsizei, const GLfloat *);
  static GL_ProgramUniform1fv_Func glProgramUniform1fv_ptr = NULL;

  if (glProgramUniform1fv_ptr == NULL) {
    glProgramUniform1fv_ptr = (GL_ProgramUniform1fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1fv_ptr(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0) {
  typedef void (APIENTRY * GL_ProgramUniform1i_Func)(GLuint, GLint, GLint);
  static GL_ProgramUniform1i_Func glProgramUniform1i_ptr = NULL;

  if (glProgramUniform1i_ptr == NULL) {
    glProgramUniform1i_ptr = (GL_ProgramUniform1i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1i_ptr(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_ProgramUniform1iv_Func)(GLuint, GLint, GLsizei, const GLint *);
  static GL_ProgramUniform1iv_Func glProgramUniform1iv_ptr = NULL;

  if (glProgramUniform1iv_ptr == NULL) {
    glProgramUniform1iv_ptr = (GL_ProgramUniform1iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1iv_ptr(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0) {
  typedef void (APIENTRY * GL_ProgramUniform1ui_Func)(GLuint, GLint, GLuint);
  static GL_ProgramUniform1ui_Func glProgramUniform1ui_ptr = NULL;

  if (glProgramUniform1ui_ptr == NULL) {
    glProgramUniform1ui_ptr = (GL_ProgramUniform1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1ui_ptr(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_ProgramUniform1uiv_Func)(GLuint, GLint, GLsizei, const GLuint *);
  static GL_ProgramUniform1uiv_Func glProgramUniform1uiv_ptr = NULL;

  if (glProgramUniform1uiv_ptr == NULL) {
    glProgramUniform1uiv_ptr = (GL_ProgramUniform1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform1uiv_ptr(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) {
  typedef void (APIENTRY * GL_ProgramUniform2d_Func)(GLuint, GLint, GLdouble, GLdouble);
  static GL_ProgramUniform2d_Func glProgramUniform2d_ptr = NULL;

  if (glProgramUniform2d_ptr == NULL) {
    glProgramUniform2d_ptr = (GL_ProgramUniform2d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2d_ptr(program, location, v0, v1);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniform2dv_Func)(GLuint, GLint, GLsizei, const GLdouble *);
  static GL_ProgramUniform2dv_Func glProgramUniform2dv_ptr = NULL;

  if (glProgramUniform2dv_ptr == NULL) {
    glProgramUniform2dv_ptr = (GL_ProgramUniform2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2dv_ptr(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
  typedef void (APIENTRY * GL_ProgramUniform2f_Func)(GLuint, GLint, GLfloat, GLfloat);
  static GL_ProgramUniform2f_Func glProgramUniform2f_ptr = NULL;

  if (glProgramUniform2f_ptr == NULL) {
    glProgramUniform2f_ptr = (GL_ProgramUniform2f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2f_ptr(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniform2fv_Func)(GLuint, GLint, GLsizei, const GLfloat *);
  static GL_ProgramUniform2fv_Func glProgramUniform2fv_ptr = NULL;

  if (glProgramUniform2fv_ptr == NULL) {
    glProgramUniform2fv_ptr = (GL_ProgramUniform2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2fv_ptr(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) {
  typedef void (APIENTRY * GL_ProgramUniform2i_Func)(GLuint, GLint, GLint, GLint);
  static GL_ProgramUniform2i_Func glProgramUniform2i_ptr = NULL;

  if (glProgramUniform2i_ptr == NULL) {
    glProgramUniform2i_ptr = (GL_ProgramUniform2i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2i_ptr(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_ProgramUniform2iv_Func)(GLuint, GLint, GLsizei, const GLint *);
  static GL_ProgramUniform2iv_Func glProgramUniform2iv_ptr = NULL;

  if (glProgramUniform2iv_ptr == NULL) {
    glProgramUniform2iv_ptr = (GL_ProgramUniform2iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2iv_ptr(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) {
  typedef void (APIENTRY * GL_ProgramUniform2ui_Func)(GLuint, GLint, GLuint, GLuint);
  static GL_ProgramUniform2ui_Func glProgramUniform2ui_ptr = NULL;

  if (glProgramUniform2ui_ptr == NULL) {
    glProgramUniform2ui_ptr = (GL_ProgramUniform2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2ui_ptr(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_ProgramUniform2uiv_Func)(GLuint, GLint, GLsizei, const GLuint *);
  static GL_ProgramUniform2uiv_Func glProgramUniform2uiv_ptr = NULL;

  if (glProgramUniform2uiv_ptr == NULL) {
    glProgramUniform2uiv_ptr = (GL_ProgramUniform2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform2uiv_ptr(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
  typedef void (APIENTRY * GL_ProgramUniform3d_Func)(GLuint, GLint, GLdouble, GLdouble, GLdouble);
  static GL_ProgramUniform3d_Func glProgramUniform3d_ptr = NULL;

  if (glProgramUniform3d_ptr == NULL) {
    glProgramUniform3d_ptr = (GL_ProgramUniform3d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3d_ptr(program, location, v0, v1, v2);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniform3dv_Func)(GLuint, GLint, GLsizei, const GLdouble *);
  static GL_ProgramUniform3dv_Func glProgramUniform3dv_ptr = NULL;

  if (glProgramUniform3dv_ptr == NULL) {
    glProgramUniform3dv_ptr = (GL_ProgramUniform3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3dv_ptr(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
  typedef void (APIENTRY * GL_ProgramUniform3f_Func)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
  static GL_ProgramUniform3f_Func glProgramUniform3f_ptr = NULL;

  if (glProgramUniform3f_ptr == NULL) {
    glProgramUniform3f_ptr = (GL_ProgramUniform3f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3f_ptr(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniform3fv_Func)(GLuint, GLint, GLsizei, const GLfloat *);
  static GL_ProgramUniform3fv_Func glProgramUniform3fv_ptr = NULL;

  if (glProgramUniform3fv_ptr == NULL) {
    glProgramUniform3fv_ptr = (GL_ProgramUniform3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3fv_ptr(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
  typedef void (APIENTRY * GL_ProgramUniform3i_Func)(GLuint, GLint, GLint, GLint, GLint);
  static GL_ProgramUniform3i_Func glProgramUniform3i_ptr = NULL;

  if (glProgramUniform3i_ptr == NULL) {
    glProgramUniform3i_ptr = (GL_ProgramUniform3i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3i_ptr(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_ProgramUniform3iv_Func)(GLuint, GLint, GLsizei, const GLint *);
  static GL_ProgramUniform3iv_Func glProgramUniform3iv_ptr = NULL;

  if (glProgramUniform3iv_ptr == NULL) {
    glProgramUniform3iv_ptr = (GL_ProgramUniform3iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3iv_ptr(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
  typedef void (APIENTRY * GL_ProgramUniform3ui_Func)(GLuint, GLint, GLuint, GLuint, GLuint);
  static GL_ProgramUniform3ui_Func glProgramUniform3ui_ptr = NULL;

  if (glProgramUniform3ui_ptr == NULL) {
    glProgramUniform3ui_ptr = (GL_ProgramUniform3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3ui_ptr(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_ProgramUniform3uiv_Func)(GLuint, GLint, GLsizei, const GLuint *);
  static GL_ProgramUniform3uiv_Func glProgramUniform3uiv_ptr = NULL;

  if (glProgramUniform3uiv_ptr == NULL) {
    glProgramUniform3uiv_ptr = (GL_ProgramUniform3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform3uiv_ptr(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
  typedef void (APIENTRY * GL_ProgramUniform4d_Func)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble);
  static GL_ProgramUniform4d_Func glProgramUniform4d_ptr = NULL;

  if (glProgramUniform4d_ptr == NULL) {
    glProgramUniform4d_ptr = (GL_ProgramUniform4d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4d_ptr(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniform4dv_Func)(GLuint, GLint, GLsizei, const GLdouble *);
  static GL_ProgramUniform4dv_Func glProgramUniform4dv_ptr = NULL;

  if (glProgramUniform4dv_ptr == NULL) {
    glProgramUniform4dv_ptr = (GL_ProgramUniform4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4dv_ptr(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
  typedef void (APIENTRY * GL_ProgramUniform4f_Func)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_ProgramUniform4f_Func glProgramUniform4f_ptr = NULL;

  if (glProgramUniform4f_ptr == NULL) {
    glProgramUniform4f_ptr = (GL_ProgramUniform4f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4f_ptr(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniform4fv_Func)(GLuint, GLint, GLsizei, const GLfloat *);
  static GL_ProgramUniform4fv_Func glProgramUniform4fv_ptr = NULL;

  if (glProgramUniform4fv_ptr == NULL) {
    glProgramUniform4fv_ptr = (GL_ProgramUniform4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4fv_ptr(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
  typedef void (APIENTRY * GL_ProgramUniform4i_Func)(GLuint, GLint, GLint, GLint, GLint, GLint);
  static GL_ProgramUniform4i_Func glProgramUniform4i_ptr = NULL;

  if (glProgramUniform4i_ptr == NULL) {
    glProgramUniform4i_ptr = (GL_ProgramUniform4i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4i_ptr(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_ProgramUniform4iv_Func)(GLuint, GLint, GLsizei, const GLint *);
  static GL_ProgramUniform4iv_Func glProgramUniform4iv_ptr = NULL;

  if (glProgramUniform4iv_ptr == NULL) {
    glProgramUniform4iv_ptr = (GL_ProgramUniform4iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4iv_ptr(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
  typedef void (APIENTRY * GL_ProgramUniform4ui_Func)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
  static GL_ProgramUniform4ui_Func glProgramUniform4ui_ptr = NULL;

  if (glProgramUniform4ui_ptr == NULL) {
    glProgramUniform4ui_ptr = (GL_ProgramUniform4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4ui_ptr(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_ProgramUniform4uiv_Func)(GLuint, GLint, GLsizei, const GLuint *);
  static GL_ProgramUniform4uiv_Func glProgramUniform4uiv_ptr = NULL;

  if (glProgramUniform4uiv_ptr == NULL) {
    glProgramUniform4uiv_ptr = (GL_ProgramUniform4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniform4uiv_ptr(program, location, count, value);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix2dv_Func glProgramUniformMatrix2dv_ptr = NULL;

  if (glProgramUniformMatrix2dv_ptr == NULL) {
    glProgramUniformMatrix2dv_ptr = (GL_ProgramUniformMatrix2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix2fv_Func glProgramUniformMatrix2fv_ptr = NULL;

  if (glProgramUniformMatrix2fv_ptr == NULL) {
    glProgramUniformMatrix2fv_ptr = (GL_ProgramUniformMatrix2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2x3dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix2x3dv_Func glProgramUniformMatrix2x3dv_ptr = NULL;

  if (glProgramUniformMatrix2x3dv_ptr == NULL) {
    glProgramUniformMatrix2x3dv_ptr = (GL_ProgramUniformMatrix2x3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2x3dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2x3fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix2x3fv_Func glProgramUniformMatrix2x3fv_ptr = NULL;

  if (glProgramUniformMatrix2x3fv_ptr == NULL) {
    glProgramUniformMatrix2x3fv_ptr = (GL_ProgramUniformMatrix2x3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2x3fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2x4dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix2x4dv_Func glProgramUniformMatrix2x4dv_ptr = NULL;

  if (glProgramUniformMatrix2x4dv_ptr == NULL) {
    glProgramUniformMatrix2x4dv_ptr = (GL_ProgramUniformMatrix2x4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2x4dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix2x4fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix2x4fv_Func glProgramUniformMatrix2x4fv_ptr = NULL;

  if (glProgramUniformMatrix2x4fv_ptr == NULL) {
    glProgramUniformMatrix2x4fv_ptr = (GL_ProgramUniformMatrix2x4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix2x4fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix3dv_Func glProgramUniformMatrix3dv_ptr = NULL;

  if (glProgramUniformMatrix3dv_ptr == NULL) {
    glProgramUniformMatrix3dv_ptr = (GL_ProgramUniformMatrix3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix3fv_Func glProgramUniformMatrix3fv_ptr = NULL;

  if (glProgramUniformMatrix3fv_ptr == NULL) {
    glProgramUniformMatrix3fv_ptr = (GL_ProgramUniformMatrix3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3x2dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix3x2dv_Func glProgramUniformMatrix3x2dv_ptr = NULL;

  if (glProgramUniformMatrix3x2dv_ptr == NULL) {
    glProgramUniformMatrix3x2dv_ptr = (GL_ProgramUniformMatrix3x2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3x2dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3x2fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix3x2fv_Func glProgramUniformMatrix3x2fv_ptr = NULL;

  if (glProgramUniformMatrix3x2fv_ptr == NULL) {
    glProgramUniformMatrix3x2fv_ptr = (GL_ProgramUniformMatrix3x2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3x2fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3x4dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix3x4dv_Func glProgramUniformMatrix3x4dv_ptr = NULL;

  if (glProgramUniformMatrix3x4dv_ptr == NULL) {
    glProgramUniformMatrix3x4dv_ptr = (GL_ProgramUniformMatrix3x4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3x4dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix3x4fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix3x4fv_Func glProgramUniformMatrix3x4fv_ptr = NULL;

  if (glProgramUniformMatrix3x4fv_ptr == NULL) {
    glProgramUniformMatrix3x4fv_ptr = (GL_ProgramUniformMatrix3x4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix3x4fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix4dv_Func glProgramUniformMatrix4dv_ptr = NULL;

  if (glProgramUniformMatrix4dv_ptr == NULL) {
    glProgramUniformMatrix4dv_ptr = (GL_ProgramUniformMatrix4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix4fv_Func glProgramUniformMatrix4fv_ptr = NULL;

  if (glProgramUniformMatrix4fv_ptr == NULL) {
    glProgramUniformMatrix4fv_ptr = (GL_ProgramUniformMatrix4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4x2dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix4x2dv_Func glProgramUniformMatrix4x2dv_ptr = NULL;

  if (glProgramUniformMatrix4x2dv_ptr == NULL) {
    glProgramUniformMatrix4x2dv_ptr = (GL_ProgramUniformMatrix4x2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4x2dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4x2fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix4x2fv_Func glProgramUniformMatrix4x2fv_ptr = NULL;

  if (glProgramUniformMatrix4x2fv_ptr == NULL) {
    glProgramUniformMatrix4x2fv_ptr = (GL_ProgramUniformMatrix4x2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4x2fv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4x3dv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_ProgramUniformMatrix4x3dv_Func glProgramUniformMatrix4x3dv_ptr = NULL;

  if (glProgramUniformMatrix4x3dv_ptr == NULL) {
    glProgramUniformMatrix4x3dv_ptr = (GL_ProgramUniformMatrix4x3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4x3dv_ptr(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_ProgramUniformMatrix4x3fv_Func)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_ProgramUniformMatrix4x3fv_Func glProgramUniformMatrix4x3fv_ptr = NULL;

  if (glProgramUniformMatrix4x3fv_ptr == NULL) {
    glProgramUniformMatrix4x3fv_ptr = (GL_ProgramUniformMatrix4x3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProgramUniformMatrix4x3fv_ptr(program, location, count, transpose, value);
}

void glProvokingVertex(GLenum mode) {
  typedef void (APIENTRY * GL_ProvokingVertex_Func)(GLenum);
  static GL_ProvokingVertex_Func glProvokingVertex_ptr = NULL;

  if (glProvokingVertex_ptr == NULL) {
    glProvokingVertex_ptr = (GL_ProvokingVertex_Func)SDL_GL_GetProcAddress(__func__);
  }

  glProvokingVertex_ptr(mode);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message) {
  typedef void (APIENTRY * GL_PushDebugGroup_Func)(GLenum, GLuint, GLsizei, const GLchar *);
  static GL_PushDebugGroup_Func glPushDebugGroup_ptr = NULL;

  if (glPushDebugGroup_ptr == NULL) {
    glPushDebugGroup_ptr = (GL_PushDebugGroup_Func)SDL_GL_GetProcAddress(__func__);
  }

  glPushDebugGroup_ptr(source, id, length, message);
}

void glQueryCounter(GLuint id, GLenum target) {
  typedef void (APIENTRY * GL_QueryCounter_Func)(GLuint, GLenum);
  static GL_QueryCounter_Func glQueryCounter_ptr = NULL;

  if (glQueryCounter_ptr == NULL) {
    glQueryCounter_ptr = (GL_QueryCounter_Func)SDL_GL_GetProcAddress(__func__);
  }

  glQueryCounter_ptr(id, target);
}

void glReadBuffer(GLenum src) {
  typedef void (APIENTRY * GL_ReadBuffer_Func)(GLenum);
  static GL_ReadBuffer_Func glReadBuffer_ptr = NULL;

  if (glReadBuffer_ptr == NULL) {
    glReadBuffer_ptr = (GL_ReadBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glReadBuffer_ptr(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels) {
  typedef void (APIENTRY * GL_ReadPixels_Func)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
  static GL_ReadPixels_Func glReadPixels_ptr = NULL;

  if (glReadPixels_ptr == NULL) {
    glReadPixels_ptr = (GL_ReadPixels_Func)SDL_GL_GetProcAddress(__func__);
  }

  glReadPixels_ptr(x, y, width, height, format, type, pixels);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data) {
  typedef void (APIENTRY * GL_ReadnPixels_Func)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *);
  static GL_ReadnPixels_Func glReadnPixels_ptr = NULL;

  if (glReadnPixels_ptr == NULL) {
    glReadnPixels_ptr = (GL_ReadnPixels_Func)SDL_GL_GetProcAddress(__func__);
  }

  glReadnPixels_ptr(x, y, width, height, format, type, bufSize, data);
}

void glReleaseShaderCompiler() {
  typedef void (APIENTRY * GL_ReleaseShaderCompiler_Func)();
  static GL_ReleaseShaderCompiler_Func glReleaseShaderCompiler_ptr = NULL;

  if (glReleaseShaderCompiler_ptr == NULL) {
    glReleaseShaderCompiler_ptr = (GL_ReleaseShaderCompiler_Func)SDL_GL_GetProcAddress(__func__);
  }

  glReleaseShaderCompiler_ptr();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_RenderbufferStorage_Func)(GLenum, GLenum, GLsizei, GLsizei);
  static GL_RenderbufferStorage_Func glRenderbufferStorage_ptr = NULL;

  if (glRenderbufferStorage_ptr == NULL) {
    glRenderbufferStorage_ptr = (GL_RenderbufferStorage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glRenderbufferStorage_ptr(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_RenderbufferStorageMultisample_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
  static GL_RenderbufferStorageMultisample_Func glRenderbufferStorageMultisample_ptr = NULL;

  if (glRenderbufferStorageMultisample_ptr == NULL) {
    glRenderbufferStorageMultisample_ptr = (GL_RenderbufferStorageMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glRenderbufferStorageMultisample_ptr(target, samples, internalformat, width, height);
}

void glResumeTransformFeedback() {
  typedef void (APIENTRY * GL_ResumeTransformFeedback_Func)();
  static GL_ResumeTransformFeedback_Func glResumeTransformFeedback_ptr = NULL;

  if (glResumeTransformFeedback_ptr == NULL) {
    glResumeTransformFeedback_ptr = (GL_ResumeTransformFeedback_Func)SDL_GL_GetProcAddress(__func__);
  }

  glResumeTransformFeedback_ptr();
}

void glSampleCoverage(GLfloat value, GLboolean invert) {
  typedef void (APIENTRY * GL_SampleCoverage_Func)(GLfloat, GLboolean);
  static GL_SampleCoverage_Func glSampleCoverage_ptr = NULL;

  if (glSampleCoverage_ptr == NULL) {
    glSampleCoverage_ptr = (GL_SampleCoverage_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSampleCoverage_ptr(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask) {
  typedef void (APIENTRY * GL_SampleMaski_Func)(GLuint, GLbitfield);
  static GL_SampleMaski_Func glSampleMaski_ptr = NULL;

  if (glSampleMaski_ptr == NULL) {
    glSampleMaski_ptr = (GL_SampleMaski_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSampleMaski_ptr(maskNumber, mask);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param) {
  typedef void (APIENTRY * GL_SamplerParameterIiv_Func)(GLuint, GLenum, const GLint *);
  static GL_SamplerParameterIiv_Func glSamplerParameterIiv_ptr = NULL;

  if (glSamplerParameterIiv_ptr == NULL) {
    glSamplerParameterIiv_ptr = (GL_SamplerParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameterIiv_ptr(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param) {
  typedef void (APIENTRY * GL_SamplerParameterIuiv_Func)(GLuint, GLenum, const GLuint *);
  static GL_SamplerParameterIuiv_Func glSamplerParameterIuiv_ptr = NULL;

  if (glSamplerParameterIuiv_ptr == NULL) {
    glSamplerParameterIuiv_ptr = (GL_SamplerParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameterIuiv_ptr(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) {
  typedef void (APIENTRY * GL_SamplerParameterf_Func)(GLuint, GLenum, GLfloat);
  static GL_SamplerParameterf_Func glSamplerParameterf_ptr = NULL;

  if (glSamplerParameterf_ptr == NULL) {
    glSamplerParameterf_ptr = (GL_SamplerParameterf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameterf_ptr(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param) {
  typedef void (APIENTRY * GL_SamplerParameterfv_Func)(GLuint, GLenum, const GLfloat *);
  static GL_SamplerParameterfv_Func glSamplerParameterfv_ptr = NULL;

  if (glSamplerParameterfv_ptr == NULL) {
    glSamplerParameterfv_ptr = (GL_SamplerParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameterfv_ptr(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_SamplerParameteri_Func)(GLuint, GLenum, GLint);
  static GL_SamplerParameteri_Func glSamplerParameteri_ptr = NULL;

  if (glSamplerParameteri_ptr == NULL) {
    glSamplerParameteri_ptr = (GL_SamplerParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameteri_ptr(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param) {
  typedef void (APIENTRY * GL_SamplerParameteriv_Func)(GLuint, GLenum, const GLint *);
  static GL_SamplerParameteriv_Func glSamplerParameteriv_ptr = NULL;

  if (glSamplerParameteriv_ptr == NULL) {
    glSamplerParameteriv_ptr = (GL_SamplerParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSamplerParameteriv_ptr(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_Scissor_Func)(GLint, GLint, GLsizei, GLsizei);
  static GL_Scissor_Func glScissor_ptr = NULL;

  if (glScissor_ptr == NULL) {
    glScissor_ptr = (GL_Scissor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glScissor_ptr(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v) {
  typedef void (APIENTRY * GL_ScissorArrayv_Func)(GLuint, GLsizei, const GLint *);
  static GL_ScissorArrayv_Func glScissorArrayv_ptr = NULL;

  if (glScissorArrayv_ptr == NULL) {
    glScissorArrayv_ptr = (GL_ScissorArrayv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glScissorArrayv_ptr(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_ScissorIndexed_Func)(GLuint, GLint, GLint, GLsizei, GLsizei);
  static GL_ScissorIndexed_Func glScissorIndexed_ptr = NULL;

  if (glScissorIndexed_ptr == NULL) {
    glScissorIndexed_ptr = (GL_ScissorIndexed_Func)SDL_GL_GetProcAddress(__func__);
  }

  glScissorIndexed_ptr(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_ScissorIndexedv_Func)(GLuint, const GLint *);
  static GL_ScissorIndexedv_Func glScissorIndexedv_ptr = NULL;

  if (glScissorIndexedv_ptr == NULL) {
    glScissorIndexedv_ptr = (GL_ScissorIndexedv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glScissorIndexedv_ptr(index, v);
}

void glSecondaryColorP3ui(GLenum type, GLuint color) {
  typedef void (APIENTRY * GL_SecondaryColorP3ui_Func)(GLenum, GLuint);
  static GL_SecondaryColorP3ui_Func glSecondaryColorP3ui_ptr = NULL;

  if (glSecondaryColorP3ui_ptr == NULL) {
    glSecondaryColorP3ui_ptr = (GL_SecondaryColorP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSecondaryColorP3ui_ptr(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color) {
  typedef void (APIENTRY * GL_SecondaryColorP3uiv_Func)(GLenum, const GLuint *);
  static GL_SecondaryColorP3uiv_Func glSecondaryColorP3uiv_ptr = NULL;

  if (glSecondaryColorP3uiv_ptr == NULL) {
    glSecondaryColorP3uiv_ptr = (GL_SecondaryColorP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glSecondaryColorP3uiv_ptr(type, color);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length) {
  typedef void (APIENTRY * GL_ShaderBinary_Func)(GLsizei, const GLuint *, GLenum, const void *, GLsizei);
  static GL_ShaderBinary_Func glShaderBinary_ptr = NULL;

  if (glShaderBinary_ptr == NULL) {
    glShaderBinary_ptr = (GL_ShaderBinary_Func)SDL_GL_GetProcAddress(__func__);
  }

  glShaderBinary_ptr(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length) {
  typedef void (APIENTRY * GL_ShaderSource_Func)(GLuint, GLsizei, const GLchar *const*, const GLint *);
  static GL_ShaderSource_Func glShaderSource_ptr = NULL;

  if (glShaderSource_ptr == NULL) {
    glShaderSource_ptr = (GL_ShaderSource_Func)SDL_GL_GetProcAddress(__func__);
  }

  glShaderSource_ptr(shader, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
  typedef void (APIENTRY * GL_ShaderStorageBlockBinding_Func)(GLuint, GLuint, GLuint);
  static GL_ShaderStorageBlockBinding_Func glShaderStorageBlockBinding_ptr = NULL;

  if (glShaderStorageBlockBinding_ptr == NULL) {
    glShaderStorageBlockBinding_ptr = (GL_ShaderStorageBlockBinding_Func)SDL_GL_GetProcAddress(__func__);
  }

  glShaderStorageBlockBinding_ptr(program, storageBlockIndex, storageBlockBinding);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask) {
  typedef void (APIENTRY * GL_StencilFunc_Func)(GLenum, GLint, GLuint);
  static GL_StencilFunc_Func glStencilFunc_ptr = NULL;

  if (glStencilFunc_ptr == NULL) {
    glStencilFunc_ptr = (GL_StencilFunc_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilFunc_ptr(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
  typedef void (APIENTRY * GL_StencilFuncSeparate_Func)(GLenum, GLenum, GLint, GLuint);
  static GL_StencilFuncSeparate_Func glStencilFuncSeparate_ptr = NULL;

  if (glStencilFuncSeparate_ptr == NULL) {
    glStencilFuncSeparate_ptr = (GL_StencilFuncSeparate_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilFuncSeparate_ptr(face, func, ref, mask);
}

void glStencilMask(GLuint mask) {
  typedef void (APIENTRY * GL_StencilMask_Func)(GLuint);
  static GL_StencilMask_Func glStencilMask_ptr = NULL;

  if (glStencilMask_ptr == NULL) {
    glStencilMask_ptr = (GL_StencilMask_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilMask_ptr(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask) {
  typedef void (APIENTRY * GL_StencilMaskSeparate_Func)(GLenum, GLuint);
  static GL_StencilMaskSeparate_Func glStencilMaskSeparate_ptr = NULL;

  if (glStencilMaskSeparate_ptr == NULL) {
    glStencilMaskSeparate_ptr = (GL_StencilMaskSeparate_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilMaskSeparate_ptr(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
  typedef void (APIENTRY * GL_StencilOp_Func)(GLenum, GLenum, GLenum);
  static GL_StencilOp_Func glStencilOp_ptr = NULL;

  if (glStencilOp_ptr == NULL) {
    glStencilOp_ptr = (GL_StencilOp_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilOp_ptr(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
  typedef void (APIENTRY * GL_StencilOpSeparate_Func)(GLenum, GLenum, GLenum, GLenum);
  static GL_StencilOpSeparate_Func glStencilOpSeparate_ptr = NULL;

  if (glStencilOpSeparate_ptr == NULL) {
    glStencilOpSeparate_ptr = (GL_StencilOpSeparate_Func)SDL_GL_GetProcAddress(__func__);
  }

  glStencilOpSeparate_ptr(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) {
  typedef void (APIENTRY * GL_TexBuffer_Func)(GLenum, GLenum, GLuint);
  static GL_TexBuffer_Func glTexBuffer_ptr = NULL;

  if (glTexBuffer_ptr == NULL) {
    glTexBuffer_ptr = (GL_TexBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexBuffer_ptr(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
  typedef void (APIENTRY * GL_TexBufferRange_Func)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
  static GL_TexBufferRange_Func glTexBufferRange_ptr = NULL;

  if (glTexBufferRange_ptr == NULL) {
    glTexBufferRange_ptr = (GL_TexBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexBufferRange_ptr(target, internalformat, buffer, offset, size);
}

void glTexCoordP1ui(GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_TexCoordP1ui_Func)(GLenum, GLuint);
  static GL_TexCoordP1ui_Func glTexCoordP1ui_ptr = NULL;

  if (glTexCoordP1ui_ptr == NULL) {
    glTexCoordP1ui_ptr = (GL_TexCoordP1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP1ui_ptr(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_TexCoordP1uiv_Func)(GLenum, const GLuint *);
  static GL_TexCoordP1uiv_Func glTexCoordP1uiv_ptr = NULL;

  if (glTexCoordP1uiv_ptr == NULL) {
    glTexCoordP1uiv_ptr = (GL_TexCoordP1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP1uiv_ptr(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_TexCoordP2ui_Func)(GLenum, GLuint);
  static GL_TexCoordP2ui_Func glTexCoordP2ui_ptr = NULL;

  if (glTexCoordP2ui_ptr == NULL) {
    glTexCoordP2ui_ptr = (GL_TexCoordP2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP2ui_ptr(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_TexCoordP2uiv_Func)(GLenum, const GLuint *);
  static GL_TexCoordP2uiv_Func glTexCoordP2uiv_ptr = NULL;

  if (glTexCoordP2uiv_ptr == NULL) {
    glTexCoordP2uiv_ptr = (GL_TexCoordP2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP2uiv_ptr(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_TexCoordP3ui_Func)(GLenum, GLuint);
  static GL_TexCoordP3ui_Func glTexCoordP3ui_ptr = NULL;

  if (glTexCoordP3ui_ptr == NULL) {
    glTexCoordP3ui_ptr = (GL_TexCoordP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP3ui_ptr(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_TexCoordP3uiv_Func)(GLenum, const GLuint *);
  static GL_TexCoordP3uiv_Func glTexCoordP3uiv_ptr = NULL;

  if (glTexCoordP3uiv_ptr == NULL) {
    glTexCoordP3uiv_ptr = (GL_TexCoordP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP3uiv_ptr(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords) {
  typedef void (APIENTRY * GL_TexCoordP4ui_Func)(GLenum, GLuint);
  static GL_TexCoordP4ui_Func glTexCoordP4ui_ptr = NULL;

  if (glTexCoordP4ui_ptr == NULL) {
    glTexCoordP4ui_ptr = (GL_TexCoordP4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP4ui_ptr(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords) {
  typedef void (APIENTRY * GL_TexCoordP4uiv_Func)(GLenum, const GLuint *);
  static GL_TexCoordP4uiv_Func glTexCoordP4uiv_ptr = NULL;

  if (glTexCoordP4uiv_ptr == NULL) {
    glTexCoordP4uiv_ptr = (GL_TexCoordP4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexCoordP4uiv_ptr(type, coords);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexImage1D_Func)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *);
  static GL_TexImage1D_Func glTexImage1D_ptr = NULL;

  if (glTexImage1D_ptr == NULL) {
    glTexImage1D_ptr = (GL_TexImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexImage1D_ptr(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexImage2D_Func)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
  static GL_TexImage2D_Func glTexImage2D_ptr = NULL;

  if (glTexImage2D_ptr == NULL) {
    glTexImage2D_ptr = (GL_TexImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexImage2D_ptr(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TexImage2DMultisample_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
  static GL_TexImage2DMultisample_Func glTexImage2DMultisample_ptr = NULL;

  if (glTexImage2DMultisample_ptr == NULL) {
    glTexImage2DMultisample_ptr = (GL_TexImage2DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexImage2DMultisample_ptr(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexImage3D_Func)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
  static GL_TexImage3D_Func glTexImage3D_ptr = NULL;

  if (glTexImage3D_ptr == NULL) {
    glTexImage3D_ptr = (GL_TexImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexImage3D_ptr(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TexImage3DMultisample_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
  static GL_TexImage3DMultisample_Func glTexImage3DMultisample_ptr = NULL;

  if (glTexImage3DMultisample_ptr == NULL) {
    glTexImage3DMultisample_ptr = (GL_TexImage3DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexImage3DMultisample_ptr(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params) {
  typedef void (APIENTRY * GL_TexParameterIiv_Func)(GLenum, GLenum, const GLint *);
  static GL_TexParameterIiv_Func glTexParameterIiv_ptr = NULL;

  if (glTexParameterIiv_ptr == NULL) {
    glTexParameterIiv_ptr = (GL_TexParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameterIiv_ptr(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params) {
  typedef void (APIENTRY * GL_TexParameterIuiv_Func)(GLenum, GLenum, const GLuint *);
  static GL_TexParameterIuiv_Func glTexParameterIuiv_ptr = NULL;

  if (glTexParameterIuiv_ptr == NULL) {
    glTexParameterIuiv_ptr = (GL_TexParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameterIuiv_ptr(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
  typedef void (APIENTRY * GL_TexParameterf_Func)(GLenum, GLenum, GLfloat);
  static GL_TexParameterf_Func glTexParameterf_ptr = NULL;

  if (glTexParameterf_ptr == NULL) {
    glTexParameterf_ptr = (GL_TexParameterf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameterf_ptr(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
  typedef void (APIENTRY * GL_TexParameterfv_Func)(GLenum, GLenum, const GLfloat *);
  static GL_TexParameterfv_Func glTexParameterfv_ptr = NULL;

  if (glTexParameterfv_ptr == NULL) {
    glTexParameterfv_ptr = (GL_TexParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameterfv_ptr(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_TexParameteri_Func)(GLenum, GLenum, GLint);
  static GL_TexParameteri_Func glTexParameteri_ptr = NULL;

  if (glTexParameteri_ptr == NULL) {
    glTexParameteri_ptr = (GL_TexParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameteri_ptr(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
  typedef void (APIENTRY * GL_TexParameteriv_Func)(GLenum, GLenum, const GLint *);
  static GL_TexParameteriv_Func glTexParameteriv_ptr = NULL;

  if (glTexParameteriv_ptr == NULL) {
    glTexParameteriv_ptr = (GL_TexParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexParameteriv_ptr(target, pname, params);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
  typedef void (APIENTRY * GL_TexStorage1D_Func)(GLenum, GLsizei, GLenum, GLsizei);
  static GL_TexStorage1D_Func glTexStorage1D_ptr = NULL;

  if (glTexStorage1D_ptr == NULL) {
    glTexStorage1D_ptr = (GL_TexStorage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexStorage1D_ptr(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_TexStorage2D_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
  static GL_TexStorage2D_Func glTexStorage2D_ptr = NULL;

  if (glTexStorage2D_ptr == NULL) {
    glTexStorage2D_ptr = (GL_TexStorage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexStorage2D_ptr(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TexStorage2DMultisample_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
  static GL_TexStorage2DMultisample_Func glTexStorage2DMultisample_ptr = NULL;

  if (glTexStorage2DMultisample_ptr == NULL) {
    glTexStorage2DMultisample_ptr = (GL_TexStorage2DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexStorage2DMultisample_ptr(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
  typedef void (APIENTRY * GL_TexStorage3D_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
  static GL_TexStorage3D_Func glTexStorage3D_ptr = NULL;

  if (glTexStorage3D_ptr == NULL) {
    glTexStorage3D_ptr = (GL_TexStorage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexStorage3D_ptr(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TexStorage3DMultisample_Func)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
  static GL_TexStorage3DMultisample_Func glTexStorage3DMultisample_ptr = NULL;

  if (glTexStorage3DMultisample_ptr == NULL) {
    glTexStorage3DMultisample_ptr = (GL_TexStorage3DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexStorage3DMultisample_ptr(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexSubImage1D_Func)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *);
  static GL_TexSubImage1D_Func glTexSubImage1D_ptr = NULL;

  if (glTexSubImage1D_ptr == NULL) {
    glTexSubImage1D_ptr = (GL_TexSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexSubImage1D_ptr(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexSubImage2D_Func)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
  static GL_TexSubImage2D_Func glTexSubImage2D_ptr = NULL;

  if (glTexSubImage2D_ptr == NULL) {
    glTexSubImage2D_ptr = (GL_TexSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexSubImage2D_ptr(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TexSubImage3D_Func)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
  static GL_TexSubImage3D_Func glTexSubImage3D_ptr = NULL;

  if (glTexSubImage3D_ptr == NULL) {
    glTexSubImage3D_ptr = (GL_TexSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTexSubImage3D_ptr(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureBarrier() {
  typedef void (APIENTRY * GL_TextureBarrier_Func)();
  static GL_TextureBarrier_Func glTextureBarrier_ptr = NULL;

  if (glTextureBarrier_ptr == NULL) {
    glTextureBarrier_ptr = (GL_TextureBarrier_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureBarrier_ptr();
}

void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer) {
  typedef void (APIENTRY * GL_TextureBuffer_Func)(GLuint, GLenum, GLuint);
  static GL_TextureBuffer_Func glTextureBuffer_ptr = NULL;

  if (glTextureBuffer_ptr == NULL) {
    glTextureBuffer_ptr = (GL_TextureBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureBuffer_ptr(texture, internalformat, buffer);
}

void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizei size) {
  typedef void (APIENTRY * GL_TextureBufferRange_Func)(GLuint, GLenum, GLuint, GLintptr, GLsizei);
  static GL_TextureBufferRange_Func glTextureBufferRange_ptr = NULL;

  if (glTextureBufferRange_ptr == NULL) {
    glTextureBufferRange_ptr = (GL_TextureBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureBufferRange_ptr(texture, internalformat, buffer, offset, size);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params) {
  typedef void (APIENTRY * GL_TextureParameterIiv_Func)(GLuint, GLenum, const GLint *);
  static GL_TextureParameterIiv_Func glTextureParameterIiv_ptr = NULL;

  if (glTextureParameterIiv_ptr == NULL) {
    glTextureParameterIiv_ptr = (GL_TextureParameterIiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameterIiv_ptr(texture, pname, params);
}

void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params) {
  typedef void (APIENTRY * GL_TextureParameterIuiv_Func)(GLuint, GLenum, const GLuint *);
  static GL_TextureParameterIuiv_Func glTextureParameterIuiv_ptr = NULL;

  if (glTextureParameterIuiv_ptr == NULL) {
    glTextureParameterIuiv_ptr = (GL_TextureParameterIuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameterIuiv_ptr(texture, pname, params);
}

void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param) {
  typedef void (APIENTRY * GL_TextureParameterf_Func)(GLuint, GLenum, GLfloat);
  static GL_TextureParameterf_Func glTextureParameterf_ptr = NULL;

  if (glTextureParameterf_ptr == NULL) {
    glTextureParameterf_ptr = (GL_TextureParameterf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameterf_ptr(texture, pname, param);
}

void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param) {
  typedef void (APIENTRY * GL_TextureParameterfv_Func)(GLuint, GLenum, const GLfloat *);
  static GL_TextureParameterfv_Func glTextureParameterfv_ptr = NULL;

  if (glTextureParameterfv_ptr == NULL) {
    glTextureParameterfv_ptr = (GL_TextureParameterfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameterfv_ptr(texture, pname, param);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLint param) {
  typedef void (APIENTRY * GL_TextureParameteri_Func)(GLuint, GLenum, GLint);
  static GL_TextureParameteri_Func glTextureParameteri_ptr = NULL;

  if (glTextureParameteri_ptr == NULL) {
    glTextureParameteri_ptr = (GL_TextureParameteri_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameteri_ptr(texture, pname, param);
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param) {
  typedef void (APIENTRY * GL_TextureParameteriv_Func)(GLuint, GLenum, const GLint *);
  static GL_TextureParameteriv_Func glTextureParameteriv_ptr = NULL;

  if (glTextureParameteriv_ptr == NULL) {
    glTextureParameteriv_ptr = (GL_TextureParameteriv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureParameteriv_ptr(texture, pname, param);
}

void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) {
  typedef void (APIENTRY * GL_TextureStorage1D_Func)(GLuint, GLsizei, GLenum, GLsizei);
  static GL_TextureStorage1D_Func glTextureStorage1D_ptr = NULL;

  if (glTextureStorage1D_ptr == NULL) {
    glTextureStorage1D_ptr = (GL_TextureStorage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureStorage1D_ptr(texture, levels, internalformat, width);
}

void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_TextureStorage2D_Func)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
  static GL_TextureStorage2D_Func glTextureStorage2D_ptr = NULL;

  if (glTextureStorage2D_ptr == NULL) {
    glTextureStorage2D_ptr = (GL_TextureStorage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureStorage2D_ptr(texture, levels, internalformat, width, height);
}

void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TextureStorage2DMultisample_Func)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
  static GL_TextureStorage2DMultisample_Func glTextureStorage2DMultisample_ptr = NULL;

  if (glTextureStorage2DMultisample_ptr == NULL) {
    glTextureStorage2DMultisample_ptr = (GL_TextureStorage2DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureStorage2DMultisample_ptr(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
  typedef void (APIENTRY * GL_TextureStorage3D_Func)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
  static GL_TextureStorage3D_Func glTextureStorage3D_ptr = NULL;

  if (glTextureStorage3D_ptr == NULL) {
    glTextureStorage3D_ptr = (GL_TextureStorage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureStorage3D_ptr(texture, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
  typedef void (APIENTRY * GL_TextureStorage3DMultisample_Func)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
  static GL_TextureStorage3DMultisample_Func glTextureStorage3DMultisample_ptr = NULL;

  if (glTextureStorage3DMultisample_ptr == NULL) {
    glTextureStorage3DMultisample_ptr = (GL_TextureStorage3DMultisample_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureStorage3DMultisample_ptr(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TextureSubImage1D_Func)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *);
  static GL_TextureSubImage1D_Func glTextureSubImage1D_ptr = NULL;

  if (glTextureSubImage1D_ptr == NULL) {
    glTextureSubImage1D_ptr = (GL_TextureSubImage1D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureSubImage1D_ptr(texture, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TextureSubImage2D_Func)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
  static GL_TextureSubImage2D_Func glTextureSubImage2D_ptr = NULL;

  if (glTextureSubImage2D_ptr == NULL) {
    glTextureSubImage2D_ptr = (GL_TextureSubImage2D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureSubImage2D_ptr(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) {
  typedef void (APIENTRY * GL_TextureSubImage3D_Func)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
  static GL_TextureSubImage3D_Func glTextureSubImage3D_ptr = NULL;

  if (glTextureSubImage3D_ptr == NULL) {
    glTextureSubImage3D_ptr = (GL_TextureSubImage3D_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureSubImage3D_ptr(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
  typedef void (APIENTRY * GL_TextureView_Func)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
  static GL_TextureView_Func glTextureView_ptr = NULL;

  if (glTextureView_ptr == NULL) {
    glTextureView_ptr = (GL_TextureView_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTextureView_ptr(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) {
  typedef void (APIENTRY * GL_TransformFeedbackBufferBase_Func)(GLuint, GLuint, GLuint);
  static GL_TransformFeedbackBufferBase_Func glTransformFeedbackBufferBase_ptr = NULL;

  if (glTransformFeedbackBufferBase_ptr == NULL) {
    glTransformFeedbackBufferBase_ptr = (GL_TransformFeedbackBufferBase_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTransformFeedbackBufferBase_ptr(xfb, index, buffer);
}

void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizei size) {
  typedef void (APIENTRY * GL_TransformFeedbackBufferRange_Func)(GLuint, GLuint, GLuint, GLintptr, GLsizei);
  static GL_TransformFeedbackBufferRange_Func glTransformFeedbackBufferRange_ptr = NULL;

  if (glTransformFeedbackBufferRange_ptr == NULL) {
    glTransformFeedbackBufferRange_ptr = (GL_TransformFeedbackBufferRange_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTransformFeedbackBufferRange_ptr(xfb, index, buffer, offset, size);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode) {
  typedef void (APIENTRY * GL_TransformFeedbackVaryings_Func)(GLuint, GLsizei, const GLchar *const*, GLenum);
  static GL_TransformFeedbackVaryings_Func glTransformFeedbackVaryings_ptr = NULL;

  if (glTransformFeedbackVaryings_ptr == NULL) {
    glTransformFeedbackVaryings_ptr = (GL_TransformFeedbackVaryings_Func)SDL_GL_GetProcAddress(__func__);
  }

  glTransformFeedbackVaryings_ptr(program, count, varyings, bufferMode);
}

void glUniform1d(GLint location, GLdouble x) {
  typedef void (APIENTRY * GL_Uniform1d_Func)(GLint, GLdouble);
  static GL_Uniform1d_Func glUniform1d_ptr = NULL;

  if (glUniform1d_ptr == NULL) {
    glUniform1d_ptr = (GL_Uniform1d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1d_ptr(location, x);
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_Uniform1dv_Func)(GLint, GLsizei, const GLdouble *);
  static GL_Uniform1dv_Func glUniform1dv_ptr = NULL;

  if (glUniform1dv_ptr == NULL) {
    glUniform1dv_ptr = (GL_Uniform1dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1dv_ptr(location, count, value);
}

void glUniform1f(GLint location, GLfloat v0) {
  typedef void (APIENTRY * GL_Uniform1f_Func)(GLint, GLfloat);
  static GL_Uniform1f_Func glUniform1f_ptr = NULL;

  if (glUniform1f_ptr == NULL) {
    glUniform1f_ptr = (GL_Uniform1f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1f_ptr(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_Uniform1fv_Func)(GLint, GLsizei, const GLfloat *);
  static GL_Uniform1fv_Func glUniform1fv_ptr = NULL;

  if (glUniform1fv_ptr == NULL) {
    glUniform1fv_ptr = (GL_Uniform1fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1fv_ptr(location, count, value);
}

void glUniform1i(GLint location, GLint v0) {
  typedef void (APIENTRY * GL_Uniform1i_Func)(GLint, GLint);
  static GL_Uniform1i_Func glUniform1i_ptr = NULL;

  if (glUniform1i_ptr == NULL) {
    glUniform1i_ptr = (GL_Uniform1i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1i_ptr(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_Uniform1iv_Func)(GLint, GLsizei, const GLint *);
  static GL_Uniform1iv_Func glUniform1iv_ptr = NULL;

  if (glUniform1iv_ptr == NULL) {
    glUniform1iv_ptr = (GL_Uniform1iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1iv_ptr(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0) {
  typedef void (APIENTRY * GL_Uniform1ui_Func)(GLint, GLuint);
  static GL_Uniform1ui_Func glUniform1ui_ptr = NULL;

  if (glUniform1ui_ptr == NULL) {
    glUniform1ui_ptr = (GL_Uniform1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1ui_ptr(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_Uniform1uiv_Func)(GLint, GLsizei, const GLuint *);
  static GL_Uniform1uiv_Func glUniform1uiv_ptr = NULL;

  if (glUniform1uiv_ptr == NULL) {
    glUniform1uiv_ptr = (GL_Uniform1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform1uiv_ptr(location, count, value);
}

void glUniform2d(GLint location, GLdouble x, GLdouble y) {
  typedef void (APIENTRY * GL_Uniform2d_Func)(GLint, GLdouble, GLdouble);
  static GL_Uniform2d_Func glUniform2d_ptr = NULL;

  if (glUniform2d_ptr == NULL) {
    glUniform2d_ptr = (GL_Uniform2d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2d_ptr(location, x, y);
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_Uniform2dv_Func)(GLint, GLsizei, const GLdouble *);
  static GL_Uniform2dv_Func glUniform2dv_ptr = NULL;

  if (glUniform2dv_ptr == NULL) {
    glUniform2dv_ptr = (GL_Uniform2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2dv_ptr(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
  typedef void (APIENTRY * GL_Uniform2f_Func)(GLint, GLfloat, GLfloat);
  static GL_Uniform2f_Func glUniform2f_ptr = NULL;

  if (glUniform2f_ptr == NULL) {
    glUniform2f_ptr = (GL_Uniform2f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2f_ptr(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_Uniform2fv_Func)(GLint, GLsizei, const GLfloat *);
  static GL_Uniform2fv_Func glUniform2fv_ptr = NULL;

  if (glUniform2fv_ptr == NULL) {
    glUniform2fv_ptr = (GL_Uniform2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2fv_ptr(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1) {
  typedef void (APIENTRY * GL_Uniform2i_Func)(GLint, GLint, GLint);
  static GL_Uniform2i_Func glUniform2i_ptr = NULL;

  if (glUniform2i_ptr == NULL) {
    glUniform2i_ptr = (GL_Uniform2i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2i_ptr(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_Uniform2iv_Func)(GLint, GLsizei, const GLint *);
  static GL_Uniform2iv_Func glUniform2iv_ptr = NULL;

  if (glUniform2iv_ptr == NULL) {
    glUniform2iv_ptr = (GL_Uniform2iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2iv_ptr(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1) {
  typedef void (APIENTRY * GL_Uniform2ui_Func)(GLint, GLuint, GLuint);
  static GL_Uniform2ui_Func glUniform2ui_ptr = NULL;

  if (glUniform2ui_ptr == NULL) {
    glUniform2ui_ptr = (GL_Uniform2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2ui_ptr(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_Uniform2uiv_Func)(GLint, GLsizei, const GLuint *);
  static GL_Uniform2uiv_Func glUniform2uiv_ptr = NULL;

  if (glUniform2uiv_ptr == NULL) {
    glUniform2uiv_ptr = (GL_Uniform2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform2uiv_ptr(location, count, value);
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) {
  typedef void (APIENTRY * GL_Uniform3d_Func)(GLint, GLdouble, GLdouble, GLdouble);
  static GL_Uniform3d_Func glUniform3d_ptr = NULL;

  if (glUniform3d_ptr == NULL) {
    glUniform3d_ptr = (GL_Uniform3d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3d_ptr(location, x, y, z);
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_Uniform3dv_Func)(GLint, GLsizei, const GLdouble *);
  static GL_Uniform3dv_Func glUniform3dv_ptr = NULL;

  if (glUniform3dv_ptr == NULL) {
    glUniform3dv_ptr = (GL_Uniform3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3dv_ptr(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
  typedef void (APIENTRY * GL_Uniform3f_Func)(GLint, GLfloat, GLfloat, GLfloat);
  static GL_Uniform3f_Func glUniform3f_ptr = NULL;

  if (glUniform3f_ptr == NULL) {
    glUniform3f_ptr = (GL_Uniform3f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3f_ptr(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_Uniform3fv_Func)(GLint, GLsizei, const GLfloat *);
  static GL_Uniform3fv_Func glUniform3fv_ptr = NULL;

  if (glUniform3fv_ptr == NULL) {
    glUniform3fv_ptr = (GL_Uniform3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3fv_ptr(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
  typedef void (APIENTRY * GL_Uniform3i_Func)(GLint, GLint, GLint, GLint);
  static GL_Uniform3i_Func glUniform3i_ptr = NULL;

  if (glUniform3i_ptr == NULL) {
    glUniform3i_ptr = (GL_Uniform3i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3i_ptr(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_Uniform3iv_Func)(GLint, GLsizei, const GLint *);
  static GL_Uniform3iv_Func glUniform3iv_ptr = NULL;

  if (glUniform3iv_ptr == NULL) {
    glUniform3iv_ptr = (GL_Uniform3iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3iv_ptr(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) {
  typedef void (APIENTRY * GL_Uniform3ui_Func)(GLint, GLuint, GLuint, GLuint);
  static GL_Uniform3ui_Func glUniform3ui_ptr = NULL;

  if (glUniform3ui_ptr == NULL) {
    glUniform3ui_ptr = (GL_Uniform3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3ui_ptr(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_Uniform3uiv_Func)(GLint, GLsizei, const GLuint *);
  static GL_Uniform3uiv_Func glUniform3uiv_ptr = NULL;

  if (glUniform3uiv_ptr == NULL) {
    glUniform3uiv_ptr = (GL_Uniform3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform3uiv_ptr(location, count, value);
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
  typedef void (APIENTRY * GL_Uniform4d_Func)(GLint, GLdouble, GLdouble, GLdouble, GLdouble);
  static GL_Uniform4d_Func glUniform4d_ptr = NULL;

  if (glUniform4d_ptr == NULL) {
    glUniform4d_ptr = (GL_Uniform4d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4d_ptr(location, x, y, z, w);
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble * value) {
  typedef void (APIENTRY * GL_Uniform4dv_Func)(GLint, GLsizei, const GLdouble *);
  static GL_Uniform4dv_Func glUniform4dv_ptr = NULL;

  if (glUniform4dv_ptr == NULL) {
    glUniform4dv_ptr = (GL_Uniform4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4dv_ptr(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
  typedef void (APIENTRY * GL_Uniform4f_Func)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_Uniform4f_Func glUniform4f_ptr = NULL;

  if (glUniform4f_ptr == NULL) {
    glUniform4f_ptr = (GL_Uniform4f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4f_ptr(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value) {
  typedef void (APIENTRY * GL_Uniform4fv_Func)(GLint, GLsizei, const GLfloat *);
  static GL_Uniform4fv_Func glUniform4fv_ptr = NULL;

  if (glUniform4fv_ptr == NULL) {
    glUniform4fv_ptr = (GL_Uniform4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4fv_ptr(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
  typedef void (APIENTRY * GL_Uniform4i_Func)(GLint, GLint, GLint, GLint, GLint);
  static GL_Uniform4i_Func glUniform4i_ptr = NULL;

  if (glUniform4i_ptr == NULL) {
    glUniform4i_ptr = (GL_Uniform4i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4i_ptr(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value) {
  typedef void (APIENTRY * GL_Uniform4iv_Func)(GLint, GLsizei, const GLint *);
  static GL_Uniform4iv_Func glUniform4iv_ptr = NULL;

  if (glUniform4iv_ptr == NULL) {
    glUniform4iv_ptr = (GL_Uniform4iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4iv_ptr(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
  typedef void (APIENTRY * GL_Uniform4ui_Func)(GLint, GLuint, GLuint, GLuint, GLuint);
  static GL_Uniform4ui_Func glUniform4ui_ptr = NULL;

  if (glUniform4ui_ptr == NULL) {
    glUniform4ui_ptr = (GL_Uniform4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4ui_ptr(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value) {
  typedef void (APIENTRY * GL_Uniform4uiv_Func)(GLint, GLsizei, const GLuint *);
  static GL_Uniform4uiv_Func glUniform4uiv_ptr = NULL;

  if (glUniform4uiv_ptr == NULL) {
    glUniform4uiv_ptr = (GL_Uniform4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniform4uiv_ptr(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
  typedef void (APIENTRY * GL_UniformBlockBinding_Func)(GLuint, GLuint, GLuint);
  static GL_UniformBlockBinding_Func glUniformBlockBinding_ptr = NULL;

  if (glUniformBlockBinding_ptr == NULL) {
    glUniformBlockBinding_ptr = (GL_UniformBlockBinding_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformBlockBinding_ptr(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix2dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix2dv_Func glUniformMatrix2dv_ptr = NULL;

  if (glUniformMatrix2dv_ptr == NULL) {
    glUniformMatrix2dv_ptr = (GL_UniformMatrix2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2dv_ptr(location, count, transpose, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix2fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix2fv_Func glUniformMatrix2fv_ptr = NULL;

  if (glUniformMatrix2fv_ptr == NULL) {
    glUniformMatrix2fv_ptr = (GL_UniformMatrix2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2fv_ptr(location, count, transpose, value);
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix2x3dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix2x3dv_Func glUniformMatrix2x3dv_ptr = NULL;

  if (glUniformMatrix2x3dv_ptr == NULL) {
    glUniformMatrix2x3dv_ptr = (GL_UniformMatrix2x3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2x3dv_ptr(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix2x3fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix2x3fv_Func glUniformMatrix2x3fv_ptr = NULL;

  if (glUniformMatrix2x3fv_ptr == NULL) {
    glUniformMatrix2x3fv_ptr = (GL_UniformMatrix2x3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2x3fv_ptr(location, count, transpose, value);
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix2x4dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix2x4dv_Func glUniformMatrix2x4dv_ptr = NULL;

  if (glUniformMatrix2x4dv_ptr == NULL) {
    glUniformMatrix2x4dv_ptr = (GL_UniformMatrix2x4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2x4dv_ptr(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix2x4fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix2x4fv_Func glUniformMatrix2x4fv_ptr = NULL;

  if (glUniformMatrix2x4fv_ptr == NULL) {
    glUniformMatrix2x4fv_ptr = (GL_UniformMatrix2x4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix2x4fv_ptr(location, count, transpose, value);
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix3dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix3dv_Func glUniformMatrix3dv_ptr = NULL;

  if (glUniformMatrix3dv_ptr == NULL) {
    glUniformMatrix3dv_ptr = (GL_UniformMatrix3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3dv_ptr(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix3fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix3fv_Func glUniformMatrix3fv_ptr = NULL;

  if (glUniformMatrix3fv_ptr == NULL) {
    glUniformMatrix3fv_ptr = (GL_UniformMatrix3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3fv_ptr(location, count, transpose, value);
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix3x2dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix3x2dv_Func glUniformMatrix3x2dv_ptr = NULL;

  if (glUniformMatrix3x2dv_ptr == NULL) {
    glUniformMatrix3x2dv_ptr = (GL_UniformMatrix3x2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3x2dv_ptr(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix3x2fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix3x2fv_Func glUniformMatrix3x2fv_ptr = NULL;

  if (glUniformMatrix3x2fv_ptr == NULL) {
    glUniformMatrix3x2fv_ptr = (GL_UniformMatrix3x2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3x2fv_ptr(location, count, transpose, value);
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix3x4dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix3x4dv_Func glUniformMatrix3x4dv_ptr = NULL;

  if (glUniformMatrix3x4dv_ptr == NULL) {
    glUniformMatrix3x4dv_ptr = (GL_UniformMatrix3x4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3x4dv_ptr(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix3x4fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix3x4fv_Func glUniformMatrix3x4fv_ptr = NULL;

  if (glUniformMatrix3x4fv_ptr == NULL) {
    glUniformMatrix3x4fv_ptr = (GL_UniformMatrix3x4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix3x4fv_ptr(location, count, transpose, value);
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix4dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix4dv_Func glUniformMatrix4dv_ptr = NULL;

  if (glUniformMatrix4dv_ptr == NULL) {
    glUniformMatrix4dv_ptr = (GL_UniformMatrix4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4dv_ptr(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix4fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix4fv_Func glUniformMatrix4fv_ptr = NULL;

  if (glUniformMatrix4fv_ptr == NULL) {
    glUniformMatrix4fv_ptr = (GL_UniformMatrix4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4fv_ptr(location, count, transpose, value);
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix4x2dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix4x2dv_Func glUniformMatrix4x2dv_ptr = NULL;

  if (glUniformMatrix4x2dv_ptr == NULL) {
    glUniformMatrix4x2dv_ptr = (GL_UniformMatrix4x2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4x2dv_ptr(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix4x2fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix4x2fv_Func glUniformMatrix4x2fv_ptr = NULL;

  if (glUniformMatrix4x2fv_ptr == NULL) {
    glUniformMatrix4x2fv_ptr = (GL_UniformMatrix4x2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4x2fv_ptr(location, count, transpose, value);
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
  typedef void (APIENTRY * GL_UniformMatrix4x3dv_Func)(GLint, GLsizei, GLboolean, const GLdouble *);
  static GL_UniformMatrix4x3dv_Func glUniformMatrix4x3dv_ptr = NULL;

  if (glUniformMatrix4x3dv_ptr == NULL) {
    glUniformMatrix4x3dv_ptr = (GL_UniformMatrix4x3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4x3dv_ptr(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  typedef void (APIENTRY * GL_UniformMatrix4x3fv_Func)(GLint, GLsizei, GLboolean, const GLfloat *);
  static GL_UniformMatrix4x3fv_Func glUniformMatrix4x3fv_ptr = NULL;

  if (glUniformMatrix4x3fv_ptr == NULL) {
    glUniformMatrix4x3fv_ptr = (GL_UniformMatrix4x3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformMatrix4x3fv_ptr(location, count, transpose, value);
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices) {
  typedef void (APIENTRY * GL_UniformSubroutinesuiv_Func)(GLenum, GLsizei, const GLuint *);
  static GL_UniformSubroutinesuiv_Func glUniformSubroutinesuiv_ptr = NULL;

  if (glUniformSubroutinesuiv_ptr == NULL) {
    glUniformSubroutinesuiv_ptr = (GL_UniformSubroutinesuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUniformSubroutinesuiv_ptr(shadertype, count, indices);
}

GLboolean glUnmapBuffer(GLenum target) {
  typedef GLboolean (APIENTRY * GL_UnmapBuffer_Func)(GLenum);
  static GL_UnmapBuffer_Func glUnmapBuffer_ptr = NULL;

  if (glUnmapBuffer_ptr == NULL) {
    glUnmapBuffer_ptr = (GL_UnmapBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUnmapBuffer_ptr(target);
}

GLboolean glUnmapNamedBuffer(GLuint buffer) {
  typedef GLboolean (APIENTRY * GL_UnmapNamedBuffer_Func)(GLuint);
  static GL_UnmapNamedBuffer_Func glUnmapNamedBuffer_ptr = NULL;

  if (glUnmapNamedBuffer_ptr == NULL) {
    glUnmapNamedBuffer_ptr = (GL_UnmapNamedBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUnmapNamedBuffer_ptr(buffer);
}

void glUseProgram(GLuint program) {
  typedef void (APIENTRY * GL_UseProgram_Func)(GLuint);
  static GL_UseProgram_Func glUseProgram_ptr = NULL;

  if (glUseProgram_ptr == NULL) {
    glUseProgram_ptr = (GL_UseProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUseProgram_ptr(program);
}

void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) {
  typedef void (APIENTRY * GL_UseProgramStages_Func)(GLuint, GLbitfield, GLuint);
  static GL_UseProgramStages_Func glUseProgramStages_ptr = NULL;

  if (glUseProgramStages_ptr == NULL) {
    glUseProgramStages_ptr = (GL_UseProgramStages_Func)SDL_GL_GetProcAddress(__func__);
  }

  glUseProgramStages_ptr(pipeline, stages, program);
}

void glValidateProgram(GLuint program) {
  typedef void (APIENTRY * GL_ValidateProgram_Func)(GLuint);
  static GL_ValidateProgram_Func glValidateProgram_ptr = NULL;

  if (glValidateProgram_ptr == NULL) {
    glValidateProgram_ptr = (GL_ValidateProgram_Func)SDL_GL_GetProcAddress(__func__);
  }

  glValidateProgram_ptr(program);
}

void glValidateProgramPipeline(GLuint pipeline) {
  typedef void (APIENTRY * GL_ValidateProgramPipeline_Func)(GLuint);
  static GL_ValidateProgramPipeline_Func glValidateProgramPipeline_ptr = NULL;

  if (glValidateProgramPipeline_ptr == NULL) {
    glValidateProgramPipeline_ptr = (GL_ValidateProgramPipeline_Func)SDL_GL_GetProcAddress(__func__);
  }

  glValidateProgramPipeline_ptr(pipeline);
}

void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) {
  typedef void (APIENTRY * GL_VertexArrayAttribBinding_Func)(GLuint, GLuint, GLuint);
  static GL_VertexArrayAttribBinding_Func glVertexArrayAttribBinding_ptr = NULL;

  if (glVertexArrayAttribBinding_ptr == NULL) {
    glVertexArrayAttribBinding_ptr = (GL_VertexArrayAttribBinding_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayAttribBinding_ptr(vaobj, attribindex, bindingindex);
}

void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexArrayAttribFormat_Func)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint);
  static GL_VertexArrayAttribFormat_Func glVertexArrayAttribFormat_ptr = NULL;

  if (glVertexArrayAttribFormat_ptr == NULL) {
    glVertexArrayAttribFormat_ptr = (GL_VertexArrayAttribFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayAttribFormat_ptr(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexArrayAttribIFormat_Func)(GLuint, GLuint, GLint, GLenum, GLuint);
  static GL_VertexArrayAttribIFormat_Func glVertexArrayAttribIFormat_ptr = NULL;

  if (glVertexArrayAttribIFormat_ptr == NULL) {
    glVertexArrayAttribIFormat_ptr = (GL_VertexArrayAttribIFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayAttribIFormat_ptr(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexArrayAttribLFormat_Func)(GLuint, GLuint, GLint, GLenum, GLuint);
  static GL_VertexArrayAttribLFormat_Func glVertexArrayAttribLFormat_ptr = NULL;

  if (glVertexArrayAttribLFormat_ptr == NULL) {
    glVertexArrayAttribLFormat_ptr = (GL_VertexArrayAttribLFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayAttribLFormat_ptr(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) {
  typedef void (APIENTRY * GL_VertexArrayBindingDivisor_Func)(GLuint, GLuint, GLuint);
  static GL_VertexArrayBindingDivisor_Func glVertexArrayBindingDivisor_ptr = NULL;

  if (glVertexArrayBindingDivisor_ptr == NULL) {
    glVertexArrayBindingDivisor_ptr = (GL_VertexArrayBindingDivisor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayBindingDivisor_ptr(vaobj, bindingindex, divisor);
}

void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) {
  typedef void (APIENTRY * GL_VertexArrayElementBuffer_Func)(GLuint, GLuint);
  static GL_VertexArrayElementBuffer_Func glVertexArrayElementBuffer_ptr = NULL;

  if (glVertexArrayElementBuffer_ptr == NULL) {
    glVertexArrayElementBuffer_ptr = (GL_VertexArrayElementBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayElementBuffer_ptr(vaobj, buffer);
}

void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
  typedef void (APIENTRY * GL_VertexArrayVertexBuffer_Func)(GLuint, GLuint, GLuint, GLintptr, GLsizei);
  static GL_VertexArrayVertexBuffer_Func glVertexArrayVertexBuffer_ptr = NULL;

  if (glVertexArrayVertexBuffer_ptr == NULL) {
    glVertexArrayVertexBuffer_ptr = (GL_VertexArrayVertexBuffer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayVertexBuffer_ptr(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) {
  typedef void (APIENTRY * GL_VertexArrayVertexBuffers_Func)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
  static GL_VertexArrayVertexBuffers_Func glVertexArrayVertexBuffers_ptr = NULL;

  if (glVertexArrayVertexBuffers_ptr == NULL) {
    glVertexArrayVertexBuffers_ptr = (GL_VertexArrayVertexBuffers_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexArrayVertexBuffers_ptr(vaobj, first, count, buffers, offsets, strides);
}

void glVertexAttrib1d(GLuint index, GLdouble x) {
  typedef void (APIENTRY * GL_VertexAttrib1d_Func)(GLuint, GLdouble);
  static GL_VertexAttrib1d_Func glVertexAttrib1d_ptr = NULL;

  if (glVertexAttrib1d_ptr == NULL) {
    glVertexAttrib1d_ptr = (GL_VertexAttrib1d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1d_ptr(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttrib1dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttrib1dv_Func glVertexAttrib1dv_ptr = NULL;

  if (glVertexAttrib1dv_ptr == NULL) {
    glVertexAttrib1dv_ptr = (GL_VertexAttrib1dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1dv_ptr(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x) {
  typedef void (APIENTRY * GL_VertexAttrib1f_Func)(GLuint, GLfloat);
  static GL_VertexAttrib1f_Func glVertexAttrib1f_ptr = NULL;

  if (glVertexAttrib1f_ptr == NULL) {
    glVertexAttrib1f_ptr = (GL_VertexAttrib1f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1f_ptr(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v) {
  typedef void (APIENTRY * GL_VertexAttrib1fv_Func)(GLuint, const GLfloat *);
  static GL_VertexAttrib1fv_Func glVertexAttrib1fv_ptr = NULL;

  if (glVertexAttrib1fv_ptr == NULL) {
    glVertexAttrib1fv_ptr = (GL_VertexAttrib1fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1fv_ptr(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x) {
  typedef void (APIENTRY * GL_VertexAttrib1s_Func)(GLuint, GLshort);
  static GL_VertexAttrib1s_Func glVertexAttrib1s_ptr = NULL;

  if (glVertexAttrib1s_ptr == NULL) {
    glVertexAttrib1s_ptr = (GL_VertexAttrib1s_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1s_ptr(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttrib1sv_Func)(GLuint, const GLshort *);
  static GL_VertexAttrib1sv_Func glVertexAttrib1sv_ptr = NULL;

  if (glVertexAttrib1sv_ptr == NULL) {
    glVertexAttrib1sv_ptr = (GL_VertexAttrib1sv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib1sv_ptr(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) {
  typedef void (APIENTRY * GL_VertexAttrib2d_Func)(GLuint, GLdouble, GLdouble);
  static GL_VertexAttrib2d_Func glVertexAttrib2d_ptr = NULL;

  if (glVertexAttrib2d_ptr == NULL) {
    glVertexAttrib2d_ptr = (GL_VertexAttrib2d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2d_ptr(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttrib2dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttrib2dv_Func glVertexAttrib2dv_ptr = NULL;

  if (glVertexAttrib2dv_ptr == NULL) {
    glVertexAttrib2dv_ptr = (GL_VertexAttrib2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2dv_ptr(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
  typedef void (APIENTRY * GL_VertexAttrib2f_Func)(GLuint, GLfloat, GLfloat);
  static GL_VertexAttrib2f_Func glVertexAttrib2f_ptr = NULL;

  if (glVertexAttrib2f_ptr == NULL) {
    glVertexAttrib2f_ptr = (GL_VertexAttrib2f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2f_ptr(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v) {
  typedef void (APIENTRY * GL_VertexAttrib2fv_Func)(GLuint, const GLfloat *);
  static GL_VertexAttrib2fv_Func glVertexAttrib2fv_ptr = NULL;

  if (glVertexAttrib2fv_ptr == NULL) {
    glVertexAttrib2fv_ptr = (GL_VertexAttrib2fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2fv_ptr(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y) {
  typedef void (APIENTRY * GL_VertexAttrib2s_Func)(GLuint, GLshort, GLshort);
  static GL_VertexAttrib2s_Func glVertexAttrib2s_ptr = NULL;

  if (glVertexAttrib2s_ptr == NULL) {
    glVertexAttrib2s_ptr = (GL_VertexAttrib2s_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2s_ptr(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttrib2sv_Func)(GLuint, const GLshort *);
  static GL_VertexAttrib2sv_Func glVertexAttrib2sv_ptr = NULL;

  if (glVertexAttrib2sv_ptr == NULL) {
    glVertexAttrib2sv_ptr = (GL_VertexAttrib2sv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib2sv_ptr(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
  typedef void (APIENTRY * GL_VertexAttrib3d_Func)(GLuint, GLdouble, GLdouble, GLdouble);
  static GL_VertexAttrib3d_Func glVertexAttrib3d_ptr = NULL;

  if (glVertexAttrib3d_ptr == NULL) {
    glVertexAttrib3d_ptr = (GL_VertexAttrib3d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3d_ptr(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttrib3dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttrib3dv_Func glVertexAttrib3dv_ptr = NULL;

  if (glVertexAttrib3dv_ptr == NULL) {
    glVertexAttrib3dv_ptr = (GL_VertexAttrib3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3dv_ptr(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
  typedef void (APIENTRY * GL_VertexAttrib3f_Func)(GLuint, GLfloat, GLfloat, GLfloat);
  static GL_VertexAttrib3f_Func glVertexAttrib3f_ptr = NULL;

  if (glVertexAttrib3f_ptr == NULL) {
    glVertexAttrib3f_ptr = (GL_VertexAttrib3f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3f_ptr(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v) {
  typedef void (APIENTRY * GL_VertexAttrib3fv_Func)(GLuint, const GLfloat *);
  static GL_VertexAttrib3fv_Func glVertexAttrib3fv_ptr = NULL;

  if (glVertexAttrib3fv_ptr == NULL) {
    glVertexAttrib3fv_ptr = (GL_VertexAttrib3fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3fv_ptr(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) {
  typedef void (APIENTRY * GL_VertexAttrib3s_Func)(GLuint, GLshort, GLshort, GLshort);
  static GL_VertexAttrib3s_Func glVertexAttrib3s_ptr = NULL;

  if (glVertexAttrib3s_ptr == NULL) {
    glVertexAttrib3s_ptr = (GL_VertexAttrib3s_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3s_ptr(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttrib3sv_Func)(GLuint, const GLshort *);
  static GL_VertexAttrib3sv_Func glVertexAttrib3sv_ptr = NULL;

  if (glVertexAttrib3sv_ptr == NULL) {
    glVertexAttrib3sv_ptr = (GL_VertexAttrib3sv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib3sv_ptr(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Nbv_Func)(GLuint, const GLbyte *);
  static GL_VertexAttrib4Nbv_Func glVertexAttrib4Nbv_ptr = NULL;

  if (glVertexAttrib4Nbv_ptr == NULL) {
    glVertexAttrib4Nbv_ptr = (GL_VertexAttrib4Nbv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nbv_ptr(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Niv_Func)(GLuint, const GLint *);
  static GL_VertexAttrib4Niv_Func glVertexAttrib4Niv_ptr = NULL;

  if (glVertexAttrib4Niv_ptr == NULL) {
    glVertexAttrib4Niv_ptr = (GL_VertexAttrib4Niv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Niv_ptr(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Nsv_Func)(GLuint, const GLshort *);
  static GL_VertexAttrib4Nsv_Func glVertexAttrib4Nsv_ptr = NULL;

  if (glVertexAttrib4Nsv_ptr == NULL) {
    glVertexAttrib4Nsv_ptr = (GL_VertexAttrib4Nsv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nsv_ptr(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
  typedef void (APIENTRY * GL_VertexAttrib4Nub_Func)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
  static GL_VertexAttrib4Nub_Func glVertexAttrib4Nub_ptr = NULL;

  if (glVertexAttrib4Nub_ptr == NULL) {
    glVertexAttrib4Nub_ptr = (GL_VertexAttrib4Nub_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nub_ptr(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Nubv_Func)(GLuint, const GLubyte *);
  static GL_VertexAttrib4Nubv_Func glVertexAttrib4Nubv_ptr = NULL;

  if (glVertexAttrib4Nubv_ptr == NULL) {
    glVertexAttrib4Nubv_ptr = (GL_VertexAttrib4Nubv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nubv_ptr(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Nuiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttrib4Nuiv_Func glVertexAttrib4Nuiv_ptr = NULL;

  if (glVertexAttrib4Nuiv_ptr == NULL) {
    glVertexAttrib4Nuiv_ptr = (GL_VertexAttrib4Nuiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nuiv_ptr(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v) {
  typedef void (APIENTRY * GL_VertexAttrib4Nusv_Func)(GLuint, const GLushort *);
  static GL_VertexAttrib4Nusv_Func glVertexAttrib4Nusv_ptr = NULL;

  if (glVertexAttrib4Nusv_ptr == NULL) {
    glVertexAttrib4Nusv_ptr = (GL_VertexAttrib4Nusv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4Nusv_ptr(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v) {
  typedef void (APIENTRY * GL_VertexAttrib4bv_Func)(GLuint, const GLbyte *);
  static GL_VertexAttrib4bv_Func glVertexAttrib4bv_ptr = NULL;

  if (glVertexAttrib4bv_ptr == NULL) {
    glVertexAttrib4bv_ptr = (GL_VertexAttrib4bv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4bv_ptr(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
  typedef void (APIENTRY * GL_VertexAttrib4d_Func)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
  static GL_VertexAttrib4d_Func glVertexAttrib4d_ptr = NULL;

  if (glVertexAttrib4d_ptr == NULL) {
    glVertexAttrib4d_ptr = (GL_VertexAttrib4d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4d_ptr(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttrib4dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttrib4dv_Func glVertexAttrib4dv_ptr = NULL;

  if (glVertexAttrib4dv_ptr == NULL) {
    glVertexAttrib4dv_ptr = (GL_VertexAttrib4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4dv_ptr(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  typedef void (APIENTRY * GL_VertexAttrib4f_Func)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_VertexAttrib4f_Func glVertexAttrib4f_ptr = NULL;

  if (glVertexAttrib4f_ptr == NULL) {
    glVertexAttrib4f_ptr = (GL_VertexAttrib4f_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4f_ptr(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v) {
  typedef void (APIENTRY * GL_VertexAttrib4fv_Func)(GLuint, const GLfloat *);
  static GL_VertexAttrib4fv_Func glVertexAttrib4fv_ptr = NULL;

  if (glVertexAttrib4fv_ptr == NULL) {
    glVertexAttrib4fv_ptr = (GL_VertexAttrib4fv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4fv_ptr(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttrib4iv_Func)(GLuint, const GLint *);
  static GL_VertexAttrib4iv_Func glVertexAttrib4iv_ptr = NULL;

  if (glVertexAttrib4iv_ptr == NULL) {
    glVertexAttrib4iv_ptr = (GL_VertexAttrib4iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4iv_ptr(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
  typedef void (APIENTRY * GL_VertexAttrib4s_Func)(GLuint, GLshort, GLshort, GLshort, GLshort);
  static GL_VertexAttrib4s_Func glVertexAttrib4s_ptr = NULL;

  if (glVertexAttrib4s_ptr == NULL) {
    glVertexAttrib4s_ptr = (GL_VertexAttrib4s_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4s_ptr(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttrib4sv_Func)(GLuint, const GLshort *);
  static GL_VertexAttrib4sv_Func glVertexAttrib4sv_ptr = NULL;

  if (glVertexAttrib4sv_ptr == NULL) {
    glVertexAttrib4sv_ptr = (GL_VertexAttrib4sv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4sv_ptr(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v) {
  typedef void (APIENTRY * GL_VertexAttrib4ubv_Func)(GLuint, const GLubyte *);
  static GL_VertexAttrib4ubv_Func glVertexAttrib4ubv_ptr = NULL;

  if (glVertexAttrib4ubv_ptr == NULL) {
    glVertexAttrib4ubv_ptr = (GL_VertexAttrib4ubv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4ubv_ptr(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttrib4uiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttrib4uiv_Func glVertexAttrib4uiv_ptr = NULL;

  if (glVertexAttrib4uiv_ptr == NULL) {
    glVertexAttrib4uiv_ptr = (GL_VertexAttrib4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4uiv_ptr(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v) {
  typedef void (APIENTRY * GL_VertexAttrib4usv_Func)(GLuint, const GLushort *);
  static GL_VertexAttrib4usv_Func glVertexAttrib4usv_ptr = NULL;

  if (glVertexAttrib4usv_ptr == NULL) {
    glVertexAttrib4usv_ptr = (GL_VertexAttrib4usv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttrib4usv_ptr(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) {
  typedef void (APIENTRY * GL_VertexAttribBinding_Func)(GLuint, GLuint);
  static GL_VertexAttribBinding_Func glVertexAttribBinding_ptr = NULL;

  if (glVertexAttribBinding_ptr == NULL) {
    glVertexAttribBinding_ptr = (GL_VertexAttribBinding_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribBinding_ptr(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor) {
  typedef void (APIENTRY * GL_VertexAttribDivisor_Func)(GLuint, GLuint);
  static GL_VertexAttribDivisor_Func glVertexAttribDivisor_ptr = NULL;

  if (glVertexAttribDivisor_ptr == NULL) {
    glVertexAttribDivisor_ptr = (GL_VertexAttribDivisor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribDivisor_ptr(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexAttribFormat_Func)(GLuint, GLint, GLenum, GLboolean, GLuint);
  static GL_VertexAttribFormat_Func glVertexAttribFormat_ptr = NULL;

  if (glVertexAttribFormat_ptr == NULL) {
    glVertexAttribFormat_ptr = (GL_VertexAttribFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribFormat_ptr(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI1i(GLuint index, GLint x) {
  typedef void (APIENTRY * GL_VertexAttribI1i_Func)(GLuint, GLint);
  static GL_VertexAttribI1i_Func glVertexAttribI1i_ptr = NULL;

  if (glVertexAttribI1i_ptr == NULL) {
    glVertexAttribI1i_ptr = (GL_VertexAttribI1i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI1i_ptr(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttribI1iv_Func)(GLuint, const GLint *);
  static GL_VertexAttribI1iv_Func glVertexAttribI1iv_ptr = NULL;

  if (glVertexAttribI1iv_ptr == NULL) {
    glVertexAttribI1iv_ptr = (GL_VertexAttribI1iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI1iv_ptr(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x) {
  typedef void (APIENTRY * GL_VertexAttribI1ui_Func)(GLuint, GLuint);
  static GL_VertexAttribI1ui_Func glVertexAttribI1ui_ptr = NULL;

  if (glVertexAttribI1ui_ptr == NULL) {
    glVertexAttribI1ui_ptr = (GL_VertexAttribI1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI1ui_ptr(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttribI1uiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttribI1uiv_Func glVertexAttribI1uiv_ptr = NULL;

  if (glVertexAttribI1uiv_ptr == NULL) {
    glVertexAttribI1uiv_ptr = (GL_VertexAttribI1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI1uiv_ptr(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y) {
  typedef void (APIENTRY * GL_VertexAttribI2i_Func)(GLuint, GLint, GLint);
  static GL_VertexAttribI2i_Func glVertexAttribI2i_ptr = NULL;

  if (glVertexAttribI2i_ptr == NULL) {
    glVertexAttribI2i_ptr = (GL_VertexAttribI2i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI2i_ptr(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttribI2iv_Func)(GLuint, const GLint *);
  static GL_VertexAttribI2iv_Func glVertexAttribI2iv_ptr = NULL;

  if (glVertexAttribI2iv_ptr == NULL) {
    glVertexAttribI2iv_ptr = (GL_VertexAttribI2iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI2iv_ptr(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) {
  typedef void (APIENTRY * GL_VertexAttribI2ui_Func)(GLuint, GLuint, GLuint);
  static GL_VertexAttribI2ui_Func glVertexAttribI2ui_ptr = NULL;

  if (glVertexAttribI2ui_ptr == NULL) {
    glVertexAttribI2ui_ptr = (GL_VertexAttribI2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI2ui_ptr(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttribI2uiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttribI2uiv_Func glVertexAttribI2uiv_ptr = NULL;

  if (glVertexAttribI2uiv_ptr == NULL) {
    glVertexAttribI2uiv_ptr = (GL_VertexAttribI2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI2uiv_ptr(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) {
  typedef void (APIENTRY * GL_VertexAttribI3i_Func)(GLuint, GLint, GLint, GLint);
  static GL_VertexAttribI3i_Func glVertexAttribI3i_ptr = NULL;

  if (glVertexAttribI3i_ptr == NULL) {
    glVertexAttribI3i_ptr = (GL_VertexAttribI3i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI3i_ptr(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttribI3iv_Func)(GLuint, const GLint *);
  static GL_VertexAttribI3iv_Func glVertexAttribI3iv_ptr = NULL;

  if (glVertexAttribI3iv_ptr == NULL) {
    glVertexAttribI3iv_ptr = (GL_VertexAttribI3iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI3iv_ptr(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) {
  typedef void (APIENTRY * GL_VertexAttribI3ui_Func)(GLuint, GLuint, GLuint, GLuint);
  static GL_VertexAttribI3ui_Func glVertexAttribI3ui_ptr = NULL;

  if (glVertexAttribI3ui_ptr == NULL) {
    glVertexAttribI3ui_ptr = (GL_VertexAttribI3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI3ui_ptr(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttribI3uiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttribI3uiv_Func glVertexAttribI3uiv_ptr = NULL;

  if (glVertexAttribI3uiv_ptr == NULL) {
    glVertexAttribI3uiv_ptr = (GL_VertexAttribI3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI3uiv_ptr(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v) {
  typedef void (APIENTRY * GL_VertexAttribI4bv_Func)(GLuint, const GLbyte *);
  static GL_VertexAttribI4bv_Func glVertexAttribI4bv_ptr = NULL;

  if (glVertexAttribI4bv_ptr == NULL) {
    glVertexAttribI4bv_ptr = (GL_VertexAttribI4bv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4bv_ptr(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) {
  typedef void (APIENTRY * GL_VertexAttribI4i_Func)(GLuint, GLint, GLint, GLint, GLint);
  static GL_VertexAttribI4i_Func glVertexAttribI4i_ptr = NULL;

  if (glVertexAttribI4i_ptr == NULL) {
    glVertexAttribI4i_ptr = (GL_VertexAttribI4i_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4i_ptr(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v) {
  typedef void (APIENTRY * GL_VertexAttribI4iv_Func)(GLuint, const GLint *);
  static GL_VertexAttribI4iv_Func glVertexAttribI4iv_ptr = NULL;

  if (glVertexAttribI4iv_ptr == NULL) {
    glVertexAttribI4iv_ptr = (GL_VertexAttribI4iv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4iv_ptr(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v) {
  typedef void (APIENTRY * GL_VertexAttribI4sv_Func)(GLuint, const GLshort *);
  static GL_VertexAttribI4sv_Func glVertexAttribI4sv_ptr = NULL;

  if (glVertexAttribI4sv_ptr == NULL) {
    glVertexAttribI4sv_ptr = (GL_VertexAttribI4sv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4sv_ptr(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v) {
  typedef void (APIENTRY * GL_VertexAttribI4ubv_Func)(GLuint, const GLubyte *);
  static GL_VertexAttribI4ubv_Func glVertexAttribI4ubv_ptr = NULL;

  if (glVertexAttribI4ubv_ptr == NULL) {
    glVertexAttribI4ubv_ptr = (GL_VertexAttribI4ubv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4ubv_ptr(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
  typedef void (APIENTRY * GL_VertexAttribI4ui_Func)(GLuint, GLuint, GLuint, GLuint, GLuint);
  static GL_VertexAttribI4ui_Func glVertexAttribI4ui_ptr = NULL;

  if (glVertexAttribI4ui_ptr == NULL) {
    glVertexAttribI4ui_ptr = (GL_VertexAttribI4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4ui_ptr(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v) {
  typedef void (APIENTRY * GL_VertexAttribI4uiv_Func)(GLuint, const GLuint *);
  static GL_VertexAttribI4uiv_Func glVertexAttribI4uiv_ptr = NULL;

  if (glVertexAttribI4uiv_ptr == NULL) {
    glVertexAttribI4uiv_ptr = (GL_VertexAttribI4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4uiv_ptr(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v) {
  typedef void (APIENTRY * GL_VertexAttribI4usv_Func)(GLuint, const GLushort *);
  static GL_VertexAttribI4usv_Func glVertexAttribI4usv_ptr = NULL;

  if (glVertexAttribI4usv_ptr == NULL) {
    glVertexAttribI4usv_ptr = (GL_VertexAttribI4usv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribI4usv_ptr(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexAttribIFormat_Func)(GLuint, GLint, GLenum, GLuint);
  static GL_VertexAttribIFormat_Func glVertexAttribIFormat_ptr = NULL;

  if (glVertexAttribIFormat_ptr == NULL) {
    glVertexAttribIFormat_ptr = (GL_VertexAttribIFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribIFormat_ptr(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) {
  typedef void (APIENTRY * GL_VertexAttribIPointer_Func)(GLuint, GLint, GLenum, GLsizei, const void *);
  static GL_VertexAttribIPointer_Func glVertexAttribIPointer_ptr = NULL;

  if (glVertexAttribIPointer_ptr == NULL) {
    glVertexAttribIPointer_ptr = (GL_VertexAttribIPointer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribIPointer_ptr(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x) {
  typedef void (APIENTRY * GL_VertexAttribL1d_Func)(GLuint, GLdouble);
  static GL_VertexAttribL1d_Func glVertexAttribL1d_ptr = NULL;

  if (glVertexAttribL1d_ptr == NULL) {
    glVertexAttribL1d_ptr = (GL_VertexAttribL1d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL1d_ptr(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttribL1dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttribL1dv_Func glVertexAttribL1dv_ptr = NULL;

  if (glVertexAttribL1dv_ptr == NULL) {
    glVertexAttribL1dv_ptr = (GL_VertexAttribL1dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL1dv_ptr(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) {
  typedef void (APIENTRY * GL_VertexAttribL2d_Func)(GLuint, GLdouble, GLdouble);
  static GL_VertexAttribL2d_Func glVertexAttribL2d_ptr = NULL;

  if (glVertexAttribL2d_ptr == NULL) {
    glVertexAttribL2d_ptr = (GL_VertexAttribL2d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL2d_ptr(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttribL2dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttribL2dv_Func glVertexAttribL2dv_ptr = NULL;

  if (glVertexAttribL2dv_ptr == NULL) {
    glVertexAttribL2dv_ptr = (GL_VertexAttribL2dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL2dv_ptr(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
  typedef void (APIENTRY * GL_VertexAttribL3d_Func)(GLuint, GLdouble, GLdouble, GLdouble);
  static GL_VertexAttribL3d_Func glVertexAttribL3d_ptr = NULL;

  if (glVertexAttribL3d_ptr == NULL) {
    glVertexAttribL3d_ptr = (GL_VertexAttribL3d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL3d_ptr(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttribL3dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttribL3dv_Func glVertexAttribL3dv_ptr = NULL;

  if (glVertexAttribL3dv_ptr == NULL) {
    glVertexAttribL3dv_ptr = (GL_VertexAttribL3dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL3dv_ptr(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
  typedef void (APIENTRY * GL_VertexAttribL4d_Func)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
  static GL_VertexAttribL4d_Func glVertexAttribL4d_ptr = NULL;

  if (glVertexAttribL4d_ptr == NULL) {
    glVertexAttribL4d_ptr = (GL_VertexAttribL4d_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL4d_ptr(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v) {
  typedef void (APIENTRY * GL_VertexAttribL4dv_Func)(GLuint, const GLdouble *);
  static GL_VertexAttribL4dv_Func glVertexAttribL4dv_ptr = NULL;

  if (glVertexAttribL4dv_ptr == NULL) {
    glVertexAttribL4dv_ptr = (GL_VertexAttribL4dv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribL4dv_ptr(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
  typedef void (APIENTRY * GL_VertexAttribLFormat_Func)(GLuint, GLint, GLenum, GLuint);
  static GL_VertexAttribLFormat_Func glVertexAttribLFormat_ptr = NULL;

  if (glVertexAttribLFormat_ptr == NULL) {
    glVertexAttribLFormat_ptr = (GL_VertexAttribLFormat_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribLFormat_ptr(attribindex, size, type, relativeoffset);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) {
  typedef void (APIENTRY * GL_VertexAttribLPointer_Func)(GLuint, GLint, GLenum, GLsizei, const void *);
  static GL_VertexAttribLPointer_Func glVertexAttribLPointer_ptr = NULL;

  if (glVertexAttribLPointer_ptr == NULL) {
    glVertexAttribLPointer_ptr = (GL_VertexAttribLPointer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribLPointer_ptr(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
  typedef void (APIENTRY * GL_VertexAttribP1ui_Func)(GLuint, GLenum, GLboolean, GLuint);
  static GL_VertexAttribP1ui_Func glVertexAttribP1ui_ptr = NULL;

  if (glVertexAttribP1ui_ptr == NULL) {
    glVertexAttribP1ui_ptr = (GL_VertexAttribP1ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP1ui_ptr(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexAttribP1uiv_Func)(GLuint, GLenum, GLboolean, const GLuint *);
  static GL_VertexAttribP1uiv_Func glVertexAttribP1uiv_ptr = NULL;

  if (glVertexAttribP1uiv_ptr == NULL) {
    glVertexAttribP1uiv_ptr = (GL_VertexAttribP1uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP1uiv_ptr(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
  typedef void (APIENTRY * GL_VertexAttribP2ui_Func)(GLuint, GLenum, GLboolean, GLuint);
  static GL_VertexAttribP2ui_Func glVertexAttribP2ui_ptr = NULL;

  if (glVertexAttribP2ui_ptr == NULL) {
    glVertexAttribP2ui_ptr = (GL_VertexAttribP2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP2ui_ptr(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexAttribP2uiv_Func)(GLuint, GLenum, GLboolean, const GLuint *);
  static GL_VertexAttribP2uiv_Func glVertexAttribP2uiv_ptr = NULL;

  if (glVertexAttribP2uiv_ptr == NULL) {
    glVertexAttribP2uiv_ptr = (GL_VertexAttribP2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP2uiv_ptr(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
  typedef void (APIENTRY * GL_VertexAttribP3ui_Func)(GLuint, GLenum, GLboolean, GLuint);
  static GL_VertexAttribP3ui_Func glVertexAttribP3ui_ptr = NULL;

  if (glVertexAttribP3ui_ptr == NULL) {
    glVertexAttribP3ui_ptr = (GL_VertexAttribP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP3ui_ptr(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexAttribP3uiv_Func)(GLuint, GLenum, GLboolean, const GLuint *);
  static GL_VertexAttribP3uiv_Func glVertexAttribP3uiv_ptr = NULL;

  if (glVertexAttribP3uiv_ptr == NULL) {
    glVertexAttribP3uiv_ptr = (GL_VertexAttribP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP3uiv_ptr(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
  typedef void (APIENTRY * GL_VertexAttribP4ui_Func)(GLuint, GLenum, GLboolean, GLuint);
  static GL_VertexAttribP4ui_Func glVertexAttribP4ui_ptr = NULL;

  if (glVertexAttribP4ui_ptr == NULL) {
    glVertexAttribP4ui_ptr = (GL_VertexAttribP4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP4ui_ptr(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexAttribP4uiv_Func)(GLuint, GLenum, GLboolean, const GLuint *);
  static GL_VertexAttribP4uiv_Func glVertexAttribP4uiv_ptr = NULL;

  if (glVertexAttribP4uiv_ptr == NULL) {
    glVertexAttribP4uiv_ptr = (GL_VertexAttribP4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribP4uiv_ptr(index, type, normalized, value);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer) {
  typedef void (APIENTRY * GL_VertexAttribPointer_Func)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
  static GL_VertexAttribPointer_Func glVertexAttribPointer_ptr = NULL;

  if (glVertexAttribPointer_ptr == NULL) {
    glVertexAttribPointer_ptr = (GL_VertexAttribPointer_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexAttribPointer_ptr(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
  typedef void (APIENTRY * GL_VertexBindingDivisor_Func)(GLuint, GLuint);
  static GL_VertexBindingDivisor_Func glVertexBindingDivisor_ptr = NULL;

  if (glVertexBindingDivisor_ptr == NULL) {
    glVertexBindingDivisor_ptr = (GL_VertexBindingDivisor_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexBindingDivisor_ptr(bindingindex, divisor);
}

void glVertexP2ui(GLenum type, GLuint value) {
  typedef void (APIENTRY * GL_VertexP2ui_Func)(GLenum, GLuint);
  static GL_VertexP2ui_Func glVertexP2ui_ptr = NULL;

  if (glVertexP2ui_ptr == NULL) {
    glVertexP2ui_ptr = (GL_VertexP2ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP2ui_ptr(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexP2uiv_Func)(GLenum, const GLuint *);
  static GL_VertexP2uiv_Func glVertexP2uiv_ptr = NULL;

  if (glVertexP2uiv_ptr == NULL) {
    glVertexP2uiv_ptr = (GL_VertexP2uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP2uiv_ptr(type, value);
}

void glVertexP3ui(GLenum type, GLuint value) {
  typedef void (APIENTRY * GL_VertexP3ui_Func)(GLenum, GLuint);
  static GL_VertexP3ui_Func glVertexP3ui_ptr = NULL;

  if (glVertexP3ui_ptr == NULL) {
    glVertexP3ui_ptr = (GL_VertexP3ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP3ui_ptr(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexP3uiv_Func)(GLenum, const GLuint *);
  static GL_VertexP3uiv_Func glVertexP3uiv_ptr = NULL;

  if (glVertexP3uiv_ptr == NULL) {
    glVertexP3uiv_ptr = (GL_VertexP3uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP3uiv_ptr(type, value);
}

void glVertexP4ui(GLenum type, GLuint value) {
  typedef void (APIENTRY * GL_VertexP4ui_Func)(GLenum, GLuint);
  static GL_VertexP4ui_Func glVertexP4ui_ptr = NULL;

  if (glVertexP4ui_ptr == NULL) {
    glVertexP4ui_ptr = (GL_VertexP4ui_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP4ui_ptr(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value) {
  typedef void (APIENTRY * GL_VertexP4uiv_Func)(GLenum, const GLuint *);
  static GL_VertexP4uiv_Func glVertexP4uiv_ptr = NULL;

  if (glVertexP4uiv_ptr == NULL) {
    glVertexP4uiv_ptr = (GL_VertexP4uiv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glVertexP4uiv_ptr(type, value);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
  typedef void (APIENTRY * GL_Viewport_Func)(GLint, GLint, GLsizei, GLsizei);
  static GL_Viewport_Func glViewport_ptr = NULL;

  if (glViewport_ptr == NULL) {
    glViewport_ptr = (GL_Viewport_Func)SDL_GL_GetProcAddress(__func__);
  }

  glViewport_ptr(x, y, width, height);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v) {
  typedef void (APIENTRY * GL_ViewportArrayv_Func)(GLuint, GLsizei, const GLfloat *);
  static GL_ViewportArrayv_Func glViewportArrayv_ptr = NULL;

  if (glViewportArrayv_ptr == NULL) {
    glViewportArrayv_ptr = (GL_ViewportArrayv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glViewportArrayv_ptr(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
  typedef void (APIENTRY * GL_ViewportIndexedf_Func)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
  static GL_ViewportIndexedf_Func glViewportIndexedf_ptr = NULL;

  if (glViewportIndexedf_ptr == NULL) {
    glViewportIndexedf_ptr = (GL_ViewportIndexedf_Func)SDL_GL_GetProcAddress(__func__);
  }

  glViewportIndexedf_ptr(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v) {
  typedef void (APIENTRY * GL_ViewportIndexedfv_Func)(GLuint, const GLfloat *);
  static GL_ViewportIndexedfv_Func glViewportIndexedfv_ptr = NULL;

  if (glViewportIndexedfv_ptr == NULL) {
    glViewportIndexedfv_ptr = (GL_ViewportIndexedfv_Func)SDL_GL_GetProcAddress(__func__);
  }

  glViewportIndexedfv_ptr(index, v);
}

void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
  typedef void (APIENTRY * GL_WaitSync_Func)(GLsync, GLbitfield, GLuint64);
  static GL_WaitSync_Func glWaitSync_ptr = NULL;

  if (glWaitSync_ptr == NULL) {
    glWaitSync_ptr = (GL_WaitSync_Func)SDL_GL_GetProcAddress(__func__);
  }

  glWaitSync_ptr(sync, flags, timeout);
}

