require 'ffi'

module RubyGL::Native
    attach_function :glAccum, [:uint, :float], :void
    attach_function :glActiveShaderProgram, [:uint, :uint], :void
    attach_function :glActiveTexture, [:uint], :void
    attach_function :glAlphaFunc, [:uint, :float], :void
    attach_function :glAreTexturesResident, [:int, :pointer, :pointer], :uchar
    attach_function :glArrayElement, [:int], :void
    attach_function :glAttachShader, [:uint, :uint], :void
    attach_function :glBegin, [:uint], :void
    attach_function :glBeginConditionalRender, [:uint, :uint], :void
    attach_function :glBeginQuery, [:uint, :uint], :void
    attach_function :glBeginQueryIndexed, [:uint, :uint, :uint], :void
    attach_function :glBeginTransformFeedback, [:uint], :void
    attach_function :glBindAttribLocation, [:uint, :uint, :string], :void
    attach_function :glBindBuffer, [:uint, :uint], :void
    attach_function :glBindBufferBase, [:uint, :uint, :uint], :void
    attach_function :glBindBufferRange, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glBindBuffersBase, [:uint, :uint, :int, :pointer], :void
    attach_function :glBindBuffersRange, [:uint, :uint, :int, :pointer, :pointer, :pointer], :void
    attach_function :glBindFragDataLocation, [:uint, :uint, :string], :void
    attach_function :glBindFragDataLocationIndexed, [:uint, :uint, :uint, :string], :void
    attach_function :glBindFramebuffer, [:uint, :uint], :void
    attach_function :glBindImageTexture, [:uint, :uint, :int, :uchar, :int, :uint, :uint], :void
    attach_function :glBindImageTextures, [:uint, :int, :pointer], :void
    attach_function :glBindProgramPipeline, [:uint], :void
    attach_function :glBindRenderbuffer, [:uint, :uint], :void
    attach_function :glBindSampler, [:uint, :uint], :void
    attach_function :glBindSamplers, [:uint, :int, :pointer], :void
    attach_function :glBindTexture, [:uint, :uint], :void
    attach_function :glBindTextureUnit, [:uint, :uint], :void
    attach_function :glBindTextures, [:uint, :int, :pointer], :void
    attach_function :glBindTransformFeedback, [:uint, :uint], :void
    attach_function :glBindVertexArray, [:uint], :void
    attach_function :glBindVertexBuffer, [:uint, :uint, :int, :int], :void
    attach_function :glBindVertexBuffers, [:uint, :int, :pointer, :pointer, :pointer], :void
    attach_function :glBitmap, [:int, :int, :float, :float, :float, :float, :string], :void
    attach_function :glBlendColor, [:float, :float, :float, :float], :void
    attach_function :glBlendEquation, [:uint], :void
    attach_function :glBlendEquationSeparate, [:uint, :uint], :void
    attach_function :glBlendEquationSeparatei, [:uint, :uint, :uint], :void
    attach_function :glBlendEquationi, [:uint, :uint], :void
    attach_function :glBlendFunc, [:uint, :uint], :void
    attach_function :glBlendFuncSeparate, [:uint, :uint, :uint, :uint], :void
    attach_function :glBlendFuncSeparatei, [:uint, :uint, :uint, :uint, :uint], :void
    attach_function :glBlendFunci, [:uint, :uint, :uint], :void
    attach_function :glBlitFramebuffer, [:int, :int, :int, :int, :int, :int, :int, :int, :uint, :uint], :void
    attach_function :glBlitNamedFramebuffer, [:uint, :uint, :int, :int, :int, :int, :int, :int, :int, :int, :uint, :uint], :void
    attach_function :glBufferData, [:uint, :int, :pointer, :uint], :void
    attach_function :glBufferStorage, [:uint, :int, :pointer, :uint], :void
    attach_function :glBufferSubData, [:uint, :int, :int, :pointer], :void
    attach_function :glCallList, [:uint], :void
    attach_function :glCallLists, [:int, :uint, :pointer], :void
    attach_function :glCheckFramebufferStatus, [:uint], :uint
    attach_function :glCheckNamedFramebufferStatus, [:uint, :uint], :uint
    attach_function :glClampColor, [:uint, :uint], :void
    attach_function :glClear, [:uint], :void
    attach_function :glClearAccum, [:float, :float, :float, :float], :void
    attach_function :glClearBufferData, [:uint, :uint, :uint, :uint, :pointer], :void
    attach_function :glClearBufferSubData, [:uint, :uint, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glClearBufferfi, [:uint, :int, :float, :int], :void
    attach_function :glClearBufferfv, [:uint, :int, :pointer], :void
    attach_function :glClearBufferiv, [:uint, :int, :pointer], :void
    attach_function :glClearBufferuiv, [:uint, :int, :pointer], :void
    attach_function :glClearColor, [:float, :float, :float, :float], :void
    attach_function :glClearDepth, [:double], :void
    attach_function :glClearDepthf, [:float], :void
    attach_function :glClearIndex, [:float], :void
    attach_function :glClearNamedBufferData, [:uint, :uint, :uint, :uint, :pointer], :void
    attach_function :glClearNamedBufferSubData, [:uint, :uint, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glClearNamedFramebufferfi, [:uint, :uint, :float, :int], :void
    attach_function :glClearNamedFramebufferfv, [:uint, :uint, :int, :pointer], :void
    attach_function :glClearNamedFramebufferiv, [:uint, :uint, :int, :pointer], :void
    attach_function :glClearNamedFramebufferuiv, [:uint, :uint, :int, :pointer], :void
    attach_function :glClearStencil, [:int], :void
    attach_function :glClearTexImage, [:uint, :int, :uint, :uint, :pointer], :void
    attach_function :glClearTexSubImage, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glClientActiveTexture, [:uint], :void
    attach_function :glClientWaitSync, [:pointer, :uint, :uint64], :uint
    attach_function :glClipControl, [:uint, :uint], :void
    attach_function :glClipPlane, [:uint, :pointer], :void
    attach_function :glColor3b, [:char, :char, :char], :void
    attach_function :glColor3bv, [:pointer], :void
    attach_function :glColor3d, [:double, :double, :double], :void
    attach_function :glColor3dv, [:pointer], :void
    attach_function :glColor3f, [:float, :float, :float], :void
    attach_function :glColor3fv, [:pointer], :void
    attach_function :glColor3i, [:int, :int, :int], :void
    attach_function :glColor3iv, [:pointer], :void
    attach_function :glColor3s, [:short, :short, :short], :void
    attach_function :glColor3sv, [:pointer], :void
    attach_function :glColor3ub, [:uchar, :uchar, :uchar], :void
    attach_function :glColor3ubv, [:string], :void
    attach_function :glColor3ui, [:uint, :uint, :uint], :void
    attach_function :glColor3uiv, [:pointer], :void
    attach_function :glColor3us, [:ushort, :ushort, :ushort], :void
    attach_function :glColor3usv, [:pointer], :void
    attach_function :glColor4b, [:char, :char, :char, :char], :void
    attach_function :glColor4bv, [:pointer], :void
    attach_function :glColor4d, [:double, :double, :double, :double], :void
    attach_function :glColor4dv, [:pointer], :void
    attach_function :glColor4f, [:float, :float, :float, :float], :void
    attach_function :glColor4fv, [:pointer], :void
    attach_function :glColor4i, [:int, :int, :int, :int], :void
    attach_function :glColor4iv, [:pointer], :void
    attach_function :glColor4s, [:short, :short, :short, :short], :void
    attach_function :glColor4sv, [:pointer], :void
    attach_function :glColor4ub, [:uchar, :uchar, :uchar, :uchar], :void
    attach_function :glColor4ubv, [:string], :void
    attach_function :glColor4ui, [:uint, :uint, :uint, :uint], :void
    attach_function :glColor4uiv, [:pointer], :void
    attach_function :glColor4us, [:ushort, :ushort, :ushort, :ushort], :void
    attach_function :glColor4usv, [:pointer], :void
    attach_function :glColorMask, [:uchar, :uchar, :uchar, :uchar], :void
    attach_function :glColorMaski, [:uint, :uchar, :uchar, :uchar, :uchar], :void
    attach_function :glColorMaterial, [:uint, :uint], :void
    attach_function :glColorP3ui, [:uint, :uint], :void
    attach_function :glColorP3uiv, [:uint, :pointer], :void
    attach_function :glColorP4ui, [:uint, :uint], :void
    attach_function :glColorP4uiv, [:uint, :pointer], :void
    attach_function :glColorPointer, [:int, :uint, :int, :pointer], :void
    attach_function :glCompileShader, [:uint], :void
    attach_function :glCompressedTexImage1D, [:uint, :int, :uint, :int, :int, :int, :pointer], :void
    attach_function :glCompressedTexImage2D, [:uint, :int, :uint, :int, :int, :int, :int, :pointer], :void
    attach_function :glCompressedTexImage3D, [:uint, :int, :uint, :int, :int, :int, :int, :int, :pointer], :void
    attach_function :glCompressedTexSubImage1D, [:uint, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCompressedTexSubImage2D, [:uint, :int, :int, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCompressedTexSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCompressedTextureSubImage1D, [:uint, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCompressedTextureSubImage2D, [:uint, :int, :int, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCompressedTextureSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :int, :pointer], :void
    attach_function :glCopyBufferSubData, [:uint, :uint, :int, :int, :int], :void
    attach_function :glCopyImageSubData, [:uint, :uint, :int, :int, :int, :int, :uint, :uint, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glCopyNamedBufferSubData, [:uint, :uint, :int, :int, :int], :void
    attach_function :glCopyPixels, [:int, :int, :int, :int, :uint], :void
    attach_function :glCopyTexImage1D, [:uint, :int, :uint, :int, :int, :int, :int], :void
    attach_function :glCopyTexImage2D, [:uint, :int, :uint, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTexSubImage1D, [:uint, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTexSubImage2D, [:uint, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTexSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTextureSubImage1D, [:uint, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTextureSubImage2D, [:uint, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glCopyTextureSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glCreateBuffers, [:int, :pointer], :void
    attach_function :glCreateFramebuffers, [:int, :pointer], :void
    attach_function :glCreateProgram, [], :uint
    attach_function :glCreateProgramPipelines, [:int, :pointer], :void
    attach_function :glCreateQueries, [:uint, :int, :pointer], :void
    attach_function :glCreateRenderbuffers, [:int, :pointer], :void
    attach_function :glCreateSamplers, [:int, :pointer], :void
    attach_function :glCreateShader, [:uint], :uint
    attach_function :glCreateShaderProgramv, [:uint, :int, :pointer], :uint
    attach_function :glCreateTextures, [:uint, :int, :pointer], :void
    attach_function :glCreateTransformFeedbacks, [:int, :pointer], :void
    attach_function :glCreateVertexArrays, [:int, :pointer], :void
    attach_function :glCullFace, [:uint], :void
    attach_function :glDebugMessageCallback, [:pointer, :pointer], :void
    attach_function :glDebugMessageControl, [:uint, :uint, :uint, :int, :pointer, :uchar], :void
    attach_function :glDebugMessageInsert, [:uint, :uint, :uint, :uint, :int, :string], :void
    attach_function :glDeleteBuffers, [:int, :pointer], :void
    attach_function :glDeleteFramebuffers, [:int, :pointer], :void
    attach_function :glDeleteLists, [:uint, :int], :void
    attach_function :glDeleteProgram, [:uint], :void
    attach_function :glDeleteProgramPipelines, [:int, :pointer], :void
    attach_function :glDeleteQueries, [:int, :pointer], :void
    attach_function :glDeleteRenderbuffers, [:int, :pointer], :void
    attach_function :glDeleteSamplers, [:int, :pointer], :void
    attach_function :glDeleteShader, [:uint], :void
    attach_function :glDeleteSync, [:pointer], :void
    attach_function :glDeleteTextures, [:int, :pointer], :void
    attach_function :glDeleteTransformFeedbacks, [:int, :pointer], :void
    attach_function :glDeleteVertexArrays, [:int, :pointer], :void
    attach_function :glDepthFunc, [:uint], :void
    attach_function :glDepthMask, [:uchar], :void
    attach_function :glDepthRange, [:double, :double], :void
    attach_function :glDepthRangeArrayv, [:uint, :int, :pointer], :void
    attach_function :glDepthRangeIndexed, [:uint, :double, :double], :void
    attach_function :glDepthRangef, [:float, :float], :void
    attach_function :glDetachShader, [:uint, :uint], :void
    attach_function :glDisable, [:uint], :void
    attach_function :glDisableClientState, [:uint], :void
    attach_function :glDisableVertexArrayAttrib, [:uint, :uint], :void
    attach_function :glDisableVertexAttribArray, [:uint], :void
    attach_function :glDisablei, [:uint, :uint], :void
    attach_function :glDispatchCompute, [:uint, :uint, :uint], :void
    attach_function :glDispatchComputeIndirect, [:int], :void
    attach_function :glDrawArrays, [:uint, :int, :int], :void
    attach_function :glDrawArraysIndirect, [:uint, :pointer], :void
    attach_function :glDrawArraysInstanced, [:uint, :int, :int, :int], :void
    attach_function :glDrawArraysInstancedBaseInstance, [:uint, :int, :int, :int, :uint], :void
    attach_function :glDrawBuffer, [:uint], :void
    attach_function :glDrawBuffers, [:int, :pointer], :void
    attach_function :glDrawElements, [:uint, :int, :uint, :pointer], :void
    attach_function :glDrawElementsBaseVertex, [:uint, :int, :uint, :pointer, :int], :void
    attach_function :glDrawElementsIndirect, [:uint, :uint, :pointer], :void
    attach_function :glDrawElementsInstanced, [:uint, :int, :uint, :pointer, :int], :void
    attach_function :glDrawElementsInstancedBaseInstance, [:uint, :int, :uint, :pointer, :int, :uint], :void
    attach_function :glDrawElementsInstancedBaseVertex, [:uint, :int, :uint, :pointer, :int, :int], :void
    attach_function :glDrawElementsInstancedBaseVertexBaseInstance, [:uint, :int, :uint, :pointer, :int, :int, :uint], :void
    attach_function :glDrawPixels, [:int, :int, :uint, :uint, :pointer], :void
    attach_function :glDrawRangeElements, [:uint, :uint, :uint, :int, :uint, :pointer], :void
    attach_function :glDrawRangeElementsBaseVertex, [:uint, :uint, :uint, :int, :uint, :pointer, :int], :void
    attach_function :glDrawTransformFeedback, [:uint, :uint], :void
    attach_function :glDrawTransformFeedbackInstanced, [:uint, :uint, :int], :void
    attach_function :glDrawTransformFeedbackStream, [:uint, :uint, :uint], :void
    attach_function :glDrawTransformFeedbackStreamInstanced, [:uint, :uint, :uint, :int], :void
    attach_function :glEdgeFlag, [:uchar], :void
    attach_function :glEdgeFlagPointer, [:int, :pointer], :void
    attach_function :glEdgeFlagv, [:string], :void
    attach_function :glEnable, [:uint], :void
    attach_function :glEnableClientState, [:uint], :void
    attach_function :glEnableVertexArrayAttrib, [:uint, :uint], :void
    attach_function :glEnableVertexAttribArray, [:uint], :void
    attach_function :glEnablei, [:uint, :uint], :void
    attach_function :glEnd, [], :void
    attach_function :glEndConditionalRender, [], :void
    attach_function :glEndList, [], :void
    attach_function :glEndQuery, [:uint], :void
    attach_function :glEndQueryIndexed, [:uint, :uint], :void
    attach_function :glEndTransformFeedback, [], :void
    attach_function :glEvalCoord1d, [:double], :void
    attach_function :glEvalCoord1dv, [:pointer], :void
    attach_function :glEvalCoord1f, [:float], :void
    attach_function :glEvalCoord1fv, [:pointer], :void
    attach_function :glEvalCoord2d, [:double, :double], :void
    attach_function :glEvalCoord2dv, [:pointer], :void
    attach_function :glEvalCoord2f, [:float, :float], :void
    attach_function :glEvalCoord2fv, [:pointer], :void
    attach_function :glEvalMesh1, [:uint, :int, :int], :void
    attach_function :glEvalMesh2, [:uint, :int, :int, :int, :int], :void
    attach_function :glEvalPoint1, [:int], :void
    attach_function :glEvalPoint2, [:int, :int], :void
    attach_function :glFeedbackBuffer, [:int, :uint, :pointer], :void
    attach_function :glFenceSync, [:uint, :uint], :pointer
    attach_function :glFinish, [], :void
    attach_function :glFlush, [], :void
    attach_function :glFlushMappedBufferRange, [:uint, :int, :int], :void
    attach_function :glFlushMappedNamedBufferRange, [:uint, :int, :int], :void
    attach_function :glFogCoordPointer, [:uint, :int, :pointer], :void
    attach_function :glFogCoordd, [:double], :void
    attach_function :glFogCoorddv, [:pointer], :void
    attach_function :glFogCoordf, [:float], :void
    attach_function :glFogCoordfv, [:pointer], :void
    attach_function :glFogf, [:uint, :float], :void
    attach_function :glFogfv, [:uint, :pointer], :void
    attach_function :glFogi, [:uint, :int], :void
    attach_function :glFogiv, [:uint, :pointer], :void
    attach_function :glFramebufferParameteri, [:uint, :uint, :int], :void
    attach_function :glFramebufferRenderbuffer, [:uint, :uint, :uint, :uint], :void
    attach_function :glFramebufferTexture, [:uint, :uint, :uint, :int], :void
    attach_function :glFramebufferTexture1D, [:uint, :uint, :uint, :uint, :int], :void
    attach_function :glFramebufferTexture2D, [:uint, :uint, :uint, :uint, :int], :void
    attach_function :glFramebufferTexture3D, [:uint, :uint, :uint, :uint, :int, :int], :void
    attach_function :glFramebufferTextureLayer, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glFrontFace, [:uint], :void
    attach_function :glFrustum, [:double, :double, :double, :double, :double, :double], :void
    attach_function :glGenBuffers, [:int, :pointer], :void
    attach_function :glGenFramebuffers, [:int, :pointer], :void
    attach_function :glGenLists, [:int], :uint
    attach_function :glGenProgramPipelines, [:int, :pointer], :void
    attach_function :glGenQueries, [:int, :pointer], :void
    attach_function :glGenRenderbuffers, [:int, :pointer], :void
    attach_function :glGenSamplers, [:int, :pointer], :void
    attach_function :glGenTextures, [:int, :pointer], :void
    attach_function :glGenTransformFeedbacks, [:int, :pointer], :void
    attach_function :glGenVertexArrays, [:int, :pointer], :void
    attach_function :glGenerateMipmap, [:uint], :void
    attach_function :glGenerateTextureMipmap, [:uint], :void
    attach_function :glGetActiveAtomicCounterBufferiv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetActiveAttrib, [:uint, :uint, :int, :pointer, :pointer, :pointer, :pointer], :void
    attach_function :glGetActiveSubroutineName, [:uint, :uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetActiveSubroutineUniformName, [:uint, :uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetActiveSubroutineUniformiv, [:uint, :uint, :uint, :uint, :pointer], :void
    attach_function :glGetActiveUniform, [:uint, :uint, :int, :pointer, :pointer, :pointer, :pointer], :void
    attach_function :glGetActiveUniformBlockName, [:uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetActiveUniformBlockiv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetActiveUniformName, [:uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetActiveUniformsiv, [:uint, :int, :pointer, :uint, :pointer], :void
    attach_function :glGetAttachedShaders, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetAttribLocation, [:uint, :string], :int
    attach_function :glGetBooleani_v, [:uint, :uint, :pointer], :void
    attach_function :glGetBooleanv, [:uint, :pointer], :void
    attach_function :glGetBufferParameteri64v, [:uint, :uint, :pointer], :void
    attach_function :glGetBufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetBufferPointerv, [:uint, :uint, :pointer], :void
    attach_function :glGetBufferSubData, [:uint, :int, :int, :pointer], :void
    attach_function :glGetClipPlane, [:uint, :pointer], :void
    attach_function :glGetCompressedTexImage, [:uint, :int, :pointer], :void
    attach_function :glGetCompressedTextureImage, [:uint, :int, :int, :pointer], :void
    attach_function :glGetCompressedTextureSubImage, [:uint, :int, :int, :int, :int, :int, :int, :int, :int, :pointer], :void
    attach_function :glGetDebugMessageLog, [:uint, :int, :pointer, :pointer, :pointer, :pointer, :pointer, :pointer], :uint
    attach_function :glGetDoublei_v, [:uint, :uint, :pointer], :void
    attach_function :glGetDoublev, [:uint, :pointer], :void
    attach_function :glGetError, [], :uint
    attach_function :glGetFloati_v, [:uint, :uint, :pointer], :void
    attach_function :glGetFloatv, [:uint, :pointer], :void
    attach_function :glGetFragDataIndex, [:uint, :string], :int
    attach_function :glGetFragDataLocation, [:uint, :string], :int
    attach_function :glGetFramebufferAttachmentParameteriv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetFramebufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetGraphicsResetStatus, [], :uint
    attach_function :glGetInteger64i_v, [:uint, :uint, :pointer], :void
    attach_function :glGetInteger64v, [:uint, :pointer], :void
    attach_function :glGetIntegeri_v, [:uint, :uint, :pointer], :void
    attach_function :glGetIntegerv, [:uint, :pointer], :void
    attach_function :glGetInternalformati64v, [:uint, :uint, :uint, :int, :pointer], :void
    attach_function :glGetInternalformativ, [:uint, :uint, :uint, :int, :pointer], :void
    attach_function :glGetLightfv, [:uint, :uint, :pointer], :void
    attach_function :glGetLightiv, [:uint, :uint, :pointer], :void
    attach_function :glGetMapdv, [:uint, :uint, :pointer], :void
    attach_function :glGetMapfv, [:uint, :uint, :pointer], :void
    attach_function :glGetMapiv, [:uint, :uint, :pointer], :void
    attach_function :glGetMaterialfv, [:uint, :uint, :pointer], :void
    attach_function :glGetMaterialiv, [:uint, :uint, :pointer], :void
    attach_function :glGetMultisamplefv, [:uint, :uint, :pointer], :void
    attach_function :glGetNamedBufferParameteri64v, [:uint, :uint, :pointer], :void
    attach_function :glGetNamedBufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetNamedBufferPointerv, [:uint, :uint, :pointer], :void
    attach_function :glGetNamedBufferSubData, [:uint, :int, :int, :pointer], :void
    attach_function :glGetNamedFramebufferAttachmentParameteriv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetNamedFramebufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetNamedRenderbufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetObjectLabel, [:uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetObjectPtrLabel, [:pointer, :int, :pointer, :pointer], :void
    attach_function :glGetPixelMapfv, [:uint, :pointer], :void
    attach_function :glGetPixelMapuiv, [:uint, :pointer], :void
    attach_function :glGetPixelMapusv, [:uint, :pointer], :void
    attach_function :glGetPointerv, [:uint, :pointer], :void
    attach_function :glGetPolygonStipple, [:pointer], :void
    attach_function :glGetProgramBinary, [:uint, :int, :pointer, :pointer, :pointer], :void
    attach_function :glGetProgramInfoLog, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetProgramInterfaceiv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetProgramPipelineInfoLog, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetProgramPipelineiv, [:uint, :uint, :pointer], :void
    attach_function :glGetProgramResourceIndex, [:uint, :uint, :string], :uint
    attach_function :glGetProgramResourceLocation, [:uint, :uint, :string], :int
    attach_function :glGetProgramResourceLocationIndex, [:uint, :uint, :string], :int
    attach_function :glGetProgramResourceName, [:uint, :uint, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetProgramResourceiv, [:uint, :uint, :uint, :int, :pointer, :int, :pointer, :pointer], :void
    attach_function :glGetProgramStageiv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetProgramiv, [:uint, :uint, :pointer], :void
    attach_function :glGetQueryBufferObjecti64v, [:uint, :uint, :uint, :int], :void
    attach_function :glGetQueryBufferObjectiv, [:uint, :uint, :uint, :int], :void
    attach_function :glGetQueryBufferObjectui64v, [:uint, :uint, :uint, :int], :void
    attach_function :glGetQueryBufferObjectuiv, [:uint, :uint, :uint, :int], :void
    attach_function :glGetQueryIndexediv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetQueryObjecti64v, [:uint, :uint, :pointer], :void
    attach_function :glGetQueryObjectiv, [:uint, :uint, :pointer], :void
    attach_function :glGetQueryObjectui64v, [:uint, :uint, :pointer], :void
    attach_function :glGetQueryObjectuiv, [:uint, :uint, :pointer], :void
    attach_function :glGetQueryiv, [:uint, :uint, :pointer], :void
    attach_function :glGetRenderbufferParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetSamplerParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glGetSamplerParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glGetSamplerParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glGetSamplerParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetShaderInfoLog, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetShaderPrecisionFormat, [:uint, :uint, :pointer, :pointer], :void
    attach_function :glGetShaderSource, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetShaderiv, [:uint, :uint, :pointer], :void
    attach_function :glGetString, [:uint], :string
    attach_function :glGetStringi, [:uint, :uint], :string
    attach_function :glGetSubroutineIndex, [:uint, :uint, :string], :uint
    attach_function :glGetSubroutineUniformLocation, [:uint, :uint, :string], :int
    attach_function :glGetSynciv, [:pointer, :uint, :int, :pointer, :pointer], :void
    attach_function :glGetTexEnvfv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexEnviv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexGendv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexGenfv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexGeniv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexImage, [:uint, :int, :uint, :uint, :pointer], :void
    attach_function :glGetTexLevelParameterfv, [:uint, :int, :uint, :pointer], :void
    attach_function :glGetTexLevelParameteriv, [:uint, :int, :uint, :pointer], :void
    attach_function :glGetTexParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glGetTexParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetTextureImage, [:uint, :int, :uint, :uint, :int, :pointer], :void
    attach_function :glGetTextureLevelParameterfv, [:uint, :int, :uint, :pointer], :void
    attach_function :glGetTextureLevelParameteriv, [:uint, :int, :uint, :pointer], :void
    attach_function :glGetTextureParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glGetTextureParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glGetTextureParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glGetTextureParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glGetTextureSubImage, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :uint, :int, :pointer], :void
    attach_function :glGetTransformFeedbackVarying, [:uint, :uint, :int, :pointer, :pointer, :pointer, :pointer], :void
    attach_function :glGetTransformFeedbacki64_v, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetTransformFeedbacki_v, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetTransformFeedbackiv, [:uint, :uint, :pointer], :void
    attach_function :glGetUniformBlockIndex, [:uint, :string], :uint
    attach_function :glGetUniformIndices, [:uint, :int, :pointer, :pointer], :void
    attach_function :glGetUniformLocation, [:uint, :string], :int
    attach_function :glGetUniformSubroutineuiv, [:uint, :int, :pointer], :void
    attach_function :glGetUniformdv, [:uint, :int, :pointer], :void
    attach_function :glGetUniformfv, [:uint, :int, :pointer], :void
    attach_function :glGetUniformiv, [:uint, :int, :pointer], :void
    attach_function :glGetUniformuiv, [:uint, :int, :pointer], :void
    attach_function :glGetVertexArrayIndexed64iv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetVertexArrayIndexediv, [:uint, :uint, :uint, :pointer], :void
    attach_function :glGetVertexArrayiv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribIiv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribIuiv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribLdv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribPointerv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribdv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribfv, [:uint, :uint, :pointer], :void
    attach_function :glGetVertexAttribiv, [:uint, :uint, :pointer], :void
    attach_function :glGetnColorTable, [:uint, :uint, :uint, :int, :pointer], :void
    attach_function :glGetnCompressedTexImage, [:uint, :int, :int, :pointer], :void
    attach_function :glGetnConvolutionFilter, [:uint, :uint, :uint, :int, :pointer], :void
    attach_function :glGetnHistogram, [:uint, :uchar, :uint, :uint, :int, :pointer], :void
    attach_function :glGetnMapdv, [:uint, :uint, :int, :pointer], :void
    attach_function :glGetnMapfv, [:uint, :uint, :int, :pointer], :void
    attach_function :glGetnMapiv, [:uint, :uint, :int, :pointer], :void
    attach_function :glGetnMinmax, [:uint, :uchar, :uint, :uint, :int, :pointer], :void
    attach_function :glGetnPixelMapfv, [:uint, :int, :pointer], :void
    attach_function :glGetnPixelMapuiv, [:uint, :int, :pointer], :void
    attach_function :glGetnPixelMapusv, [:uint, :int, :pointer], :void
    attach_function :glGetnPolygonStipple, [:int, :pointer], :void
    attach_function :glGetnSeparableFilter, [:uint, :uint, :uint, :int, :pointer, :int, :pointer, :pointer], :void
    attach_function :glGetnTexImage, [:uint, :int, :uint, :uint, :int, :pointer], :void
    attach_function :glGetnUniformdv, [:uint, :int, :int, :pointer], :void
    attach_function :glGetnUniformfv, [:uint, :int, :int, :pointer], :void
    attach_function :glGetnUniformiv, [:uint, :int, :int, :pointer], :void
    attach_function :glGetnUniformuiv, [:uint, :int, :int, :pointer], :void
    attach_function :glHint, [:uint, :uint], :void
    attach_function :glIndexMask, [:uint], :void
    attach_function :glIndexPointer, [:uint, :int, :pointer], :void
    attach_function :glIndexd, [:double], :void
    attach_function :glIndexdv, [:pointer], :void
    attach_function :glIndexf, [:float], :void
    attach_function :glIndexfv, [:pointer], :void
    attach_function :glIndexi, [:int], :void
    attach_function :glIndexiv, [:pointer], :void
    attach_function :glIndexs, [:short], :void
    attach_function :glIndexsv, [:pointer], :void
    attach_function :glIndexub, [:uchar], :void
    attach_function :glIndexubv, [:string], :void
    attach_function :glInitNames, [], :void
    attach_function :glInterleavedArrays, [:uint, :int, :pointer], :void
    attach_function :glInvalidateBufferData, [:uint], :void
    attach_function :glInvalidateBufferSubData, [:uint, :int, :int], :void
    attach_function :glInvalidateFramebuffer, [:uint, :int, :pointer], :void
    attach_function :glInvalidateNamedFramebufferData, [:uint, :int, :pointer], :void
    attach_function :glInvalidateNamedFramebufferSubData, [:uint, :int, :pointer, :int, :int, :int, :int], :void
    attach_function :glInvalidateSubFramebuffer, [:uint, :int, :pointer, :int, :int, :int, :int], :void
    attach_function :glInvalidateTexImage, [:uint, :int], :void
    attach_function :glInvalidateTexSubImage, [:uint, :int, :int, :int, :int, :int, :int, :int], :void
    attach_function :glIsBuffer, [:uint], :uchar
    attach_function :glIsEnabled, [:uint], :uchar
    attach_function :glIsEnabledi, [:uint, :uint], :uchar
    attach_function :glIsFramebuffer, [:uint], :uchar
    attach_function :glIsList, [:uint], :uchar
    attach_function :glIsProgram, [:uint], :uchar
    attach_function :glIsProgramPipeline, [:uint], :uchar
    attach_function :glIsQuery, [:uint], :uchar
    attach_function :glIsRenderbuffer, [:uint], :uchar
    attach_function :glIsSampler, [:uint], :uchar
    attach_function :glIsShader, [:uint], :uchar
    attach_function :glIsSync, [:pointer], :uchar
    attach_function :glIsTexture, [:uint], :uchar
    attach_function :glIsTransformFeedback, [:uint], :uchar
    attach_function :glIsVertexArray, [:uint], :uchar
    attach_function :glLightModelf, [:uint, :float], :void
    attach_function :glLightModelfv, [:uint, :pointer], :void
    attach_function :glLightModeli, [:uint, :int], :void
    attach_function :glLightModeliv, [:uint, :pointer], :void
    attach_function :glLightf, [:uint, :uint, :float], :void
    attach_function :glLightfv, [:uint, :uint, :pointer], :void
    attach_function :glLighti, [:uint, :uint, :int], :void
    attach_function :glLightiv, [:uint, :uint, :pointer], :void
    attach_function :glLineStipple, [:int, :ushort], :void
    attach_function :glLineWidth, [:float], :void
    attach_function :glLinkProgram, [:uint], :void
    attach_function :glListBase, [:uint], :void
    attach_function :glLoadIdentity, [], :void
    attach_function :glLoadMatrixd, [:pointer], :void
    attach_function :glLoadMatrixf, [:pointer], :void
    attach_function :glLoadName, [:uint], :void
    attach_function :glLoadTransposeMatrixd, [:pointer], :void
    attach_function :glLoadTransposeMatrixf, [:pointer], :void
    attach_function :glLogicOp, [:uint], :void
    attach_function :glMap1d, [:uint, :double, :double, :int, :int, :pointer], :void
    attach_function :glMap1f, [:uint, :float, :float, :int, :int, :pointer], :void
    attach_function :glMap2d, [:uint, :double, :double, :int, :int, :double, :double, :int, :int, :pointer], :void
    attach_function :glMap2f, [:uint, :float, :float, :int, :int, :float, :float, :int, :int, :pointer], :void
    attach_function :glMapBuffer, [:uint, :uint], :pointer
    attach_function :glMapBufferRange, [:uint, :int, :int, :uint], :pointer
    attach_function :glMapGrid1d, [:int, :double, :double], :void
    attach_function :glMapGrid1f, [:int, :float, :float], :void
    attach_function :glMapGrid2d, [:int, :double, :double, :int, :double, :double], :void
    attach_function :glMapGrid2f, [:int, :float, :float, :int, :float, :float], :void
    attach_function :glMapNamedBuffer, [:uint, :uint], :pointer
    attach_function :glMapNamedBufferRange, [:uint, :int, :int, :uint], :pointer
    attach_function :glMaterialf, [:uint, :uint, :float], :void
    attach_function :glMaterialfv, [:uint, :uint, :pointer], :void
    attach_function :glMateriali, [:uint, :uint, :int], :void
    attach_function :glMaterialiv, [:uint, :uint, :pointer], :void
    attach_function :glMatrixMode, [:uint], :void
    attach_function :glMemoryBarrier, [:uint], :void
    attach_function :glMemoryBarrierByRegion, [:uint], :void
    attach_function :glMinSampleShading, [:float], :void
    attach_function :glMultMatrixd, [:pointer], :void
    attach_function :glMultMatrixf, [:pointer], :void
    attach_function :glMultTransposeMatrixd, [:pointer], :void
    attach_function :glMultTransposeMatrixf, [:pointer], :void
    attach_function :glMultiDrawArrays, [:uint, :pointer, :pointer, :int], :void
    attach_function :glMultiDrawArraysIndirect, [:uint, :pointer, :int, :int], :void
    attach_function :glMultiDrawElements, [:uint, :pointer, :uint, :pointer, :int], :void
    attach_function :glMultiDrawElementsBaseVertex, [:uint, :pointer, :uint, :pointer, :int, :pointer], :void
    attach_function :glMultiDrawElementsIndirect, [:uint, :uint, :pointer, :int, :int], :void
    attach_function :glMultiTexCoord1d, [:uint, :double], :void
    attach_function :glMultiTexCoord1dv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord1f, [:uint, :float], :void
    attach_function :glMultiTexCoord1fv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord1i, [:uint, :int], :void
    attach_function :glMultiTexCoord1iv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord1s, [:uint, :short], :void
    attach_function :glMultiTexCoord1sv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord2d, [:uint, :double, :double], :void
    attach_function :glMultiTexCoord2dv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord2f, [:uint, :float, :float], :void
    attach_function :glMultiTexCoord2fv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord2i, [:uint, :int, :int], :void
    attach_function :glMultiTexCoord2iv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord2s, [:uint, :short, :short], :void
    attach_function :glMultiTexCoord2sv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord3d, [:uint, :double, :double, :double], :void
    attach_function :glMultiTexCoord3dv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord3f, [:uint, :float, :float, :float], :void
    attach_function :glMultiTexCoord3fv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord3i, [:uint, :int, :int, :int], :void
    attach_function :glMultiTexCoord3iv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord3s, [:uint, :short, :short, :short], :void
    attach_function :glMultiTexCoord3sv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord4d, [:uint, :double, :double, :double, :double], :void
    attach_function :glMultiTexCoord4dv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord4f, [:uint, :float, :float, :float, :float], :void
    attach_function :glMultiTexCoord4fv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord4i, [:uint, :int, :int, :int, :int], :void
    attach_function :glMultiTexCoord4iv, [:uint, :pointer], :void
    attach_function :glMultiTexCoord4s, [:uint, :short, :short, :short, :short], :void
    attach_function :glMultiTexCoord4sv, [:uint, :pointer], :void
    attach_function :glMultiTexCoordP1ui, [:uint, :uint, :uint], :void
    attach_function :glMultiTexCoordP1uiv, [:uint, :uint, :pointer], :void
    attach_function :glMultiTexCoordP2ui, [:uint, :uint, :uint], :void
    attach_function :glMultiTexCoordP2uiv, [:uint, :uint, :pointer], :void
    attach_function :glMultiTexCoordP3ui, [:uint, :uint, :uint], :void
    attach_function :glMultiTexCoordP3uiv, [:uint, :uint, :pointer], :void
    attach_function :glMultiTexCoordP4ui, [:uint, :uint, :uint], :void
    attach_function :glMultiTexCoordP4uiv, [:uint, :uint, :pointer], :void
    attach_function :glNamedBufferData, [:uint, :int, :pointer, :uint], :void
    attach_function :glNamedBufferStorage, [:uint, :int, :pointer, :uint], :void
    attach_function :glNamedBufferSubData, [:uint, :int, :int, :pointer], :void
    attach_function :glNamedFramebufferDrawBuffer, [:uint, :uint], :void
    attach_function :glNamedFramebufferDrawBuffers, [:uint, :int, :pointer], :void
    attach_function :glNamedFramebufferParameteri, [:uint, :uint, :int], :void
    attach_function :glNamedFramebufferReadBuffer, [:uint, :uint], :void
    attach_function :glNamedFramebufferRenderbuffer, [:uint, :uint, :uint, :uint], :void
    attach_function :glNamedFramebufferTexture, [:uint, :uint, :uint, :int], :void
    attach_function :glNamedFramebufferTextureLayer, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glNamedRenderbufferStorage, [:uint, :uint, :int, :int], :void
    attach_function :glNamedRenderbufferStorageMultisample, [:uint, :int, :uint, :int, :int], :void
    attach_function :glNewList, [:uint, :uint], :void
    attach_function :glNormal3b, [:char, :char, :char], :void
    attach_function :glNormal3bv, [:pointer], :void
    attach_function :glNormal3d, [:double, :double, :double], :void
    attach_function :glNormal3dv, [:pointer], :void
    attach_function :glNormal3f, [:float, :float, :float], :void
    attach_function :glNormal3fv, [:pointer], :void
    attach_function :glNormal3i, [:int, :int, :int], :void
    attach_function :glNormal3iv, [:pointer], :void
    attach_function :glNormal3s, [:short, :short, :short], :void
    attach_function :glNormal3sv, [:pointer], :void
    attach_function :glNormalP3ui, [:uint, :uint], :void
    attach_function :glNormalP3uiv, [:uint, :pointer], :void
    attach_function :glNormalPointer, [:uint, :int, :pointer], :void
    attach_function :glObjectLabel, [:uint, :uint, :int, :string], :void
    attach_function :glObjectPtrLabel, [:pointer, :int, :string], :void
    attach_function :glOrtho, [:double, :double, :double, :double, :double, :double], :void
    attach_function :glPassThrough, [:float], :void
    attach_function :glPatchParameterfv, [:uint, :pointer], :void
    attach_function :glPatchParameteri, [:uint, :int], :void
    attach_function :glPauseTransformFeedback, [], :void
    attach_function :glPixelMapfv, [:uint, :int, :pointer], :void
    attach_function :glPixelMapuiv, [:uint, :int, :pointer], :void
    attach_function :glPixelMapusv, [:uint, :int, :pointer], :void
    attach_function :glPixelStoref, [:uint, :float], :void
    attach_function :glPixelStorei, [:uint, :int], :void
    attach_function :glPixelTransferf, [:uint, :float], :void
    attach_function :glPixelTransferi, [:uint, :int], :void
    attach_function :glPixelZoom, [:float, :float], :void
    attach_function :glPointParameterf, [:uint, :float], :void
    attach_function :glPointParameterfv, [:uint, :pointer], :void
    attach_function :glPointParameteri, [:uint, :int], :void
    attach_function :glPointParameteriv, [:uint, :pointer], :void
    attach_function :glPointSize, [:float], :void
    attach_function :glPolygonMode, [:uint, :uint], :void
    attach_function :glPolygonOffset, [:float, :float], :void
    attach_function :glPolygonStipple, [:string], :void
    attach_function :glPopAttrib, [], :void
    attach_function :glPopClientAttrib, [], :void
    attach_function :glPopDebugGroup, [], :void
    attach_function :glPopMatrix, [], :void
    attach_function :glPopName, [], :void
    attach_function :glPrimitiveRestartIndex, [:uint], :void
    attach_function :glPrioritizeTextures, [:int, :pointer, :pointer], :void
    attach_function :glProgramBinary, [:uint, :uint, :pointer, :int], :void
    attach_function :glProgramParameteri, [:uint, :uint, :int], :void
    attach_function :glProgramUniform1d, [:uint, :int, :double], :void
    attach_function :glProgramUniform1dv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform1f, [:uint, :int, :float], :void
    attach_function :glProgramUniform1fv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform1i, [:uint, :int, :int], :void
    attach_function :glProgramUniform1iv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform1ui, [:uint, :int, :uint], :void
    attach_function :glProgramUniform1uiv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform2d, [:uint, :int, :double, :double], :void
    attach_function :glProgramUniform2dv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform2f, [:uint, :int, :float, :float], :void
    attach_function :glProgramUniform2fv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform2i, [:uint, :int, :int, :int], :void
    attach_function :glProgramUniform2iv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform2ui, [:uint, :int, :uint, :uint], :void
    attach_function :glProgramUniform2uiv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform3d, [:uint, :int, :double, :double, :double], :void
    attach_function :glProgramUniform3dv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform3f, [:uint, :int, :float, :float, :float], :void
    attach_function :glProgramUniform3fv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform3i, [:uint, :int, :int, :int, :int], :void
    attach_function :glProgramUniform3iv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform3ui, [:uint, :int, :uint, :uint, :uint], :void
    attach_function :glProgramUniform3uiv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform4d, [:uint, :int, :double, :double, :double, :double], :void
    attach_function :glProgramUniform4dv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform4f, [:uint, :int, :float, :float, :float, :float], :void
    attach_function :glProgramUniform4fv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform4i, [:uint, :int, :int, :int, :int, :int], :void
    attach_function :glProgramUniform4iv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniform4ui, [:uint, :int, :uint, :uint, :uint, :uint], :void
    attach_function :glProgramUniform4uiv, [:uint, :int, :int, :pointer], :void
    attach_function :glProgramUniformMatrix2dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix2fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix2x3dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix2x3fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix2x4dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix2x4fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3x2dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3x2fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3x4dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix3x4fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4x2dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4x2fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4x3dv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProgramUniformMatrix4x3fv, [:uint, :int, :int, :uchar, :pointer], :void
    attach_function :glProvokingVertex, [:uint], :void
    attach_function :glPushAttrib, [:uint], :void
    attach_function :glPushClientAttrib, [:uint], :void
    attach_function :glPushDebugGroup, [:uint, :uint, :int, :string], :void
    attach_function :glPushMatrix, [], :void
    attach_function :glPushName, [:uint], :void
    attach_function :glQueryCounter, [:uint, :uint], :void
    attach_function :glRasterPos2d, [:double, :double], :void
    attach_function :glRasterPos2dv, [:pointer], :void
    attach_function :glRasterPos2f, [:float, :float], :void
    attach_function :glRasterPos2fv, [:pointer], :void
    attach_function :glRasterPos2i, [:int, :int], :void
    attach_function :glRasterPos2iv, [:pointer], :void
    attach_function :glRasterPos2s, [:short, :short], :void
    attach_function :glRasterPos2sv, [:pointer], :void
    attach_function :glRasterPos3d, [:double, :double, :double], :void
    attach_function :glRasterPos3dv, [:pointer], :void
    attach_function :glRasterPos3f, [:float, :float, :float], :void
    attach_function :glRasterPos3fv, [:pointer], :void
    attach_function :glRasterPos3i, [:int, :int, :int], :void
    attach_function :glRasterPos3iv, [:pointer], :void
    attach_function :glRasterPos3s, [:short, :short, :short], :void
    attach_function :glRasterPos3sv, [:pointer], :void
    attach_function :glRasterPos4d, [:double, :double, :double, :double], :void
    attach_function :glRasterPos4dv, [:pointer], :void
    attach_function :glRasterPos4f, [:float, :float, :float, :float], :void
    attach_function :glRasterPos4fv, [:pointer], :void
    attach_function :glRasterPos4i, [:int, :int, :int, :int], :void
    attach_function :glRasterPos4iv, [:pointer], :void
    attach_function :glRasterPos4s, [:short, :short, :short, :short], :void
    attach_function :glRasterPos4sv, [:pointer], :void
    attach_function :glReadBuffer, [:uint], :void
    attach_function :glReadPixels, [:int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glReadnPixels, [:int, :int, :int, :int, :uint, :uint, :int, :pointer], :void
    attach_function :glRectd, [:double, :double, :double, :double], :void
    attach_function :glRectdv, [:pointer, :pointer], :void
    attach_function :glRectf, [:float, :float, :float, :float], :void
    attach_function :glRectfv, [:pointer, :pointer], :void
    attach_function :glRecti, [:int, :int, :int, :int], :void
    attach_function :glRectiv, [:pointer, :pointer], :void
    attach_function :glRects, [:short, :short, :short, :short], :void
    attach_function :glRectsv, [:pointer, :pointer], :void
    attach_function :glReleaseShaderCompiler, [], :void
    attach_function :glRenderMode, [:uint], :int
    attach_function :glRenderbufferStorage, [:uint, :uint, :int, :int], :void
    attach_function :glRenderbufferStorageMultisample, [:uint, :int, :uint, :int, :int], :void
    attach_function :glResumeTransformFeedback, [], :void
    attach_function :glRotated, [:double, :double, :double, :double], :void
    attach_function :glRotatef, [:float, :float, :float, :float], :void
    attach_function :glSampleCoverage, [:float, :uchar], :void
    attach_function :glSampleMaski, [:uint, :uint], :void
    attach_function :glSamplerParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glSamplerParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glSamplerParameterf, [:uint, :uint, :float], :void
    attach_function :glSamplerParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glSamplerParameteri, [:uint, :uint, :int], :void
    attach_function :glSamplerParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glScaled, [:double, :double, :double], :void
    attach_function :glScalef, [:float, :float, :float], :void
    attach_function :glScissor, [:int, :int, :int, :int], :void
    attach_function :glScissorArrayv, [:uint, :int, :pointer], :void
    attach_function :glScissorIndexed, [:uint, :int, :int, :int, :int], :void
    attach_function :glScissorIndexedv, [:uint, :pointer], :void
    attach_function :glSecondaryColor3b, [:char, :char, :char], :void
    attach_function :glSecondaryColor3bv, [:pointer], :void
    attach_function :glSecondaryColor3d, [:double, :double, :double], :void
    attach_function :glSecondaryColor3dv, [:pointer], :void
    attach_function :glSecondaryColor3f, [:float, :float, :float], :void
    attach_function :glSecondaryColor3fv, [:pointer], :void
    attach_function :glSecondaryColor3i, [:int, :int, :int], :void
    attach_function :glSecondaryColor3iv, [:pointer], :void
    attach_function :glSecondaryColor3s, [:short, :short, :short], :void
    attach_function :glSecondaryColor3sv, [:pointer], :void
    attach_function :glSecondaryColor3ub, [:uchar, :uchar, :uchar], :void
    attach_function :glSecondaryColor3ubv, [:string], :void
    attach_function :glSecondaryColor3ui, [:uint, :uint, :uint], :void
    attach_function :glSecondaryColor3uiv, [:pointer], :void
    attach_function :glSecondaryColor3us, [:ushort, :ushort, :ushort], :void
    attach_function :glSecondaryColor3usv, [:pointer], :void
    attach_function :glSecondaryColorP3ui, [:uint, :uint], :void
    attach_function :glSecondaryColorP3uiv, [:uint, :pointer], :void
    attach_function :glSecondaryColorPointer, [:int, :uint, :int, :pointer], :void
    attach_function :glSelectBuffer, [:int, :pointer], :void
    attach_function :glShadeModel, [:uint], :void
    attach_function :glShaderBinary, [:int, :pointer, :uint, :pointer, :int], :void
    attach_function :glShaderSource, [:uint, :int, :pointer, :pointer], :void
    attach_function :glShaderStorageBlockBinding, [:uint, :uint, :uint], :void
    attach_function :glStencilFunc, [:uint, :int, :uint], :void
    attach_function :glStencilFuncSeparate, [:uint, :uint, :int, :uint], :void
    attach_function :glStencilMask, [:uint], :void
    attach_function :glStencilMaskSeparate, [:uint, :uint], :void
    attach_function :glStencilOp, [:uint, :uint, :uint], :void
    attach_function :glStencilOpSeparate, [:uint, :uint, :uint, :uint], :void
    attach_function :glTexBuffer, [:uint, :uint, :uint], :void
    attach_function :glTexBufferRange, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glTexCoord1d, [:double], :void
    attach_function :glTexCoord1dv, [:pointer], :void
    attach_function :glTexCoord1f, [:float], :void
    attach_function :glTexCoord1fv, [:pointer], :void
    attach_function :glTexCoord1i, [:int], :void
    attach_function :glTexCoord1iv, [:pointer], :void
    attach_function :glTexCoord1s, [:short], :void
    attach_function :glTexCoord1sv, [:pointer], :void
    attach_function :glTexCoord2d, [:double, :double], :void
    attach_function :glTexCoord2dv, [:pointer], :void
    attach_function :glTexCoord2f, [:float, :float], :void
    attach_function :glTexCoord2fv, [:pointer], :void
    attach_function :glTexCoord2i, [:int, :int], :void
    attach_function :glTexCoord2iv, [:pointer], :void
    attach_function :glTexCoord2s, [:short, :short], :void
    attach_function :glTexCoord2sv, [:pointer], :void
    attach_function :glTexCoord3d, [:double, :double, :double], :void
    attach_function :glTexCoord3dv, [:pointer], :void
    attach_function :glTexCoord3f, [:float, :float, :float], :void
    attach_function :glTexCoord3fv, [:pointer], :void
    attach_function :glTexCoord3i, [:int, :int, :int], :void
    attach_function :glTexCoord3iv, [:pointer], :void
    attach_function :glTexCoord3s, [:short, :short, :short], :void
    attach_function :glTexCoord3sv, [:pointer], :void
    attach_function :glTexCoord4d, [:double, :double, :double, :double], :void
    attach_function :glTexCoord4dv, [:pointer], :void
    attach_function :glTexCoord4f, [:float, :float, :float, :float], :void
    attach_function :glTexCoord4fv, [:pointer], :void
    attach_function :glTexCoord4i, [:int, :int, :int, :int], :void
    attach_function :glTexCoord4iv, [:pointer], :void
    attach_function :glTexCoord4s, [:short, :short, :short, :short], :void
    attach_function :glTexCoord4sv, [:pointer], :void
    attach_function :glTexCoordP1ui, [:uint, :uint], :void
    attach_function :glTexCoordP1uiv, [:uint, :pointer], :void
    attach_function :glTexCoordP2ui, [:uint, :uint], :void
    attach_function :glTexCoordP2uiv, [:uint, :pointer], :void
    attach_function :glTexCoordP3ui, [:uint, :uint], :void
    attach_function :glTexCoordP3uiv, [:uint, :pointer], :void
    attach_function :glTexCoordP4ui, [:uint, :uint], :void
    attach_function :glTexCoordP4uiv, [:uint, :pointer], :void
    attach_function :glTexCoordPointer, [:int, :uint, :int, :pointer], :void
    attach_function :glTexEnvf, [:uint, :uint, :float], :void
    attach_function :glTexEnvfv, [:uint, :uint, :pointer], :void
    attach_function :glTexEnvi, [:uint, :uint, :int], :void
    attach_function :glTexEnviv, [:uint, :uint, :pointer], :void
    attach_function :glTexGend, [:uint, :uint, :double], :void
    attach_function :glTexGendv, [:uint, :uint, :pointer], :void
    attach_function :glTexGenf, [:uint, :uint, :float], :void
    attach_function :glTexGenfv, [:uint, :uint, :pointer], :void
    attach_function :glTexGeni, [:uint, :uint, :int], :void
    attach_function :glTexGeniv, [:uint, :uint, :pointer], :void
    attach_function :glTexImage1D, [:uint, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTexImage2D, [:uint, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTexImage2DMultisample, [:uint, :int, :uint, :int, :int, :uchar], :void
    attach_function :glTexImage3D, [:uint, :int, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTexImage3DMultisample, [:uint, :int, :uint, :int, :int, :int, :uchar], :void
    attach_function :glTexParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glTexParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glTexParameterf, [:uint, :uint, :float], :void
    attach_function :glTexParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glTexParameteri, [:uint, :uint, :int], :void
    attach_function :glTexParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glTexStorage1D, [:uint, :int, :uint, :int], :void
    attach_function :glTexStorage2D, [:uint, :int, :uint, :int, :int], :void
    attach_function :glTexStorage2DMultisample, [:uint, :int, :uint, :int, :int, :uchar], :void
    attach_function :glTexStorage3D, [:uint, :int, :uint, :int, :int, :int], :void
    attach_function :glTexStorage3DMultisample, [:uint, :int, :uint, :int, :int, :int, :uchar], :void
    attach_function :glTexSubImage1D, [:uint, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTexSubImage2D, [:uint, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTexSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTextureBarrier, [], :void
    attach_function :glTextureBuffer, [:uint, :uint, :uint], :void
    attach_function :glTextureBufferRange, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glTextureParameterIiv, [:uint, :uint, :pointer], :void
    attach_function :glTextureParameterIuiv, [:uint, :uint, :pointer], :void
    attach_function :glTextureParameterf, [:uint, :uint, :float], :void
    attach_function :glTextureParameterfv, [:uint, :uint, :pointer], :void
    attach_function :glTextureParameteri, [:uint, :uint, :int], :void
    attach_function :glTextureParameteriv, [:uint, :uint, :pointer], :void
    attach_function :glTextureStorage1D, [:uint, :int, :uint, :int], :void
    attach_function :glTextureStorage2D, [:uint, :int, :uint, :int, :int], :void
    attach_function :glTextureStorage2DMultisample, [:uint, :int, :uint, :int, :int, :uchar], :void
    attach_function :glTextureStorage3D, [:uint, :int, :uint, :int, :int, :int], :void
    attach_function :glTextureStorage3DMultisample, [:uint, :int, :uint, :int, :int, :int, :uchar], :void
    attach_function :glTextureSubImage1D, [:uint, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTextureSubImage2D, [:uint, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTextureSubImage3D, [:uint, :int, :int, :int, :int, :int, :int, :int, :uint, :uint, :pointer], :void
    attach_function :glTextureView, [:uint, :uint, :uint, :uint, :uint, :uint, :uint, :uint], :void
    attach_function :glTransformFeedbackBufferBase, [:uint, :uint, :uint], :void
    attach_function :glTransformFeedbackBufferRange, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glTransformFeedbackVaryings, [:uint, :int, :pointer, :uint], :void
    attach_function :glTranslated, [:double, :double, :double], :void
    attach_function :glTranslatef, [:float, :float, :float], :void
    attach_function :glUniform1d, [:int, :double], :void
    attach_function :glUniform1dv, [:int, :int, :pointer], :void
    attach_function :glUniform1f, [:int, :float], :void
    attach_function :glUniform1fv, [:int, :int, :pointer], :void
    attach_function :glUniform1i, [:int, :int], :void
    attach_function :glUniform1iv, [:int, :int, :pointer], :void
    attach_function :glUniform1ui, [:int, :uint], :void
    attach_function :glUniform1uiv, [:int, :int, :pointer], :void
    attach_function :glUniform2d, [:int, :double, :double], :void
    attach_function :glUniform2dv, [:int, :int, :pointer], :void
    attach_function :glUniform2f, [:int, :float, :float], :void
    attach_function :glUniform2fv, [:int, :int, :pointer], :void
    attach_function :glUniform2i, [:int, :int, :int], :void
    attach_function :glUniform2iv, [:int, :int, :pointer], :void
    attach_function :glUniform2ui, [:int, :uint, :uint], :void
    attach_function :glUniform2uiv, [:int, :int, :pointer], :void
    attach_function :glUniform3d, [:int, :double, :double, :double], :void
    attach_function :glUniform3dv, [:int, :int, :pointer], :void
    attach_function :glUniform3f, [:int, :float, :float, :float], :void
    attach_function :glUniform3fv, [:int, :int, :pointer], :void
    attach_function :glUniform3i, [:int, :int, :int, :int], :void
    attach_function :glUniform3iv, [:int, :int, :pointer], :void
    attach_function :glUniform3ui, [:int, :uint, :uint, :uint], :void
    attach_function :glUniform3uiv, [:int, :int, :pointer], :void
    attach_function :glUniform4d, [:int, :double, :double, :double, :double], :void
    attach_function :glUniform4dv, [:int, :int, :pointer], :void
    attach_function :glUniform4f, [:int, :float, :float, :float, :float], :void
    attach_function :glUniform4fv, [:int, :int, :pointer], :void
    attach_function :glUniform4i, [:int, :int, :int, :int, :int], :void
    attach_function :glUniform4iv, [:int, :int, :pointer], :void
    attach_function :glUniform4ui, [:int, :uint, :uint, :uint, :uint], :void
    attach_function :glUniform4uiv, [:int, :int, :pointer], :void
    attach_function :glUniformBlockBinding, [:uint, :uint, :uint], :void
    attach_function :glUniformMatrix2dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix2fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix2x3dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix2x3fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix2x4dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix2x4fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3x2dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3x2fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3x4dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix3x4fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4x2dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4x2fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4x3dv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformMatrix4x3fv, [:int, :int, :uchar, :pointer], :void
    attach_function :glUniformSubroutinesuiv, [:uint, :int, :pointer], :void
    attach_function :glUnmapBuffer, [:uint], :uchar
    attach_function :glUnmapNamedBuffer, [:uint], :uchar
    attach_function :glUseProgram, [:uint], :void
    attach_function :glUseProgramStages, [:uint, :uint, :uint], :void
    attach_function :glValidateProgram, [:uint], :void
    attach_function :glValidateProgramPipeline, [:uint], :void
    attach_function :glVertex2d, [:double, :double], :void
    attach_function :glVertex2dv, [:pointer], :void
    attach_function :glVertex2f, [:float, :float], :void
    attach_function :glVertex2fv, [:pointer], :void
    attach_function :glVertex2i, [:int, :int], :void
    attach_function :glVertex2iv, [:pointer], :void
    attach_function :glVertex2s, [:short, :short], :void
    attach_function :glVertex2sv, [:pointer], :void
    attach_function :glVertex3d, [:double, :double, :double], :void
    attach_function :glVertex3dv, [:pointer], :void
    attach_function :glVertex3f, [:float, :float, :float], :void
    attach_function :glVertex3fv, [:pointer], :void
    attach_function :glVertex3i, [:int, :int, :int], :void
    attach_function :glVertex3iv, [:pointer], :void
    attach_function :glVertex3s, [:short, :short, :short], :void
    attach_function :glVertex3sv, [:pointer], :void
    attach_function :glVertex4d, [:double, :double, :double, :double], :void
    attach_function :glVertex4dv, [:pointer], :void
    attach_function :glVertex4f, [:float, :float, :float, :float], :void
    attach_function :glVertex4fv, [:pointer], :void
    attach_function :glVertex4i, [:int, :int, :int, :int], :void
    attach_function :glVertex4iv, [:pointer], :void
    attach_function :glVertex4s, [:short, :short, :short, :short], :void
    attach_function :glVertex4sv, [:pointer], :void
    attach_function :glVertexArrayAttribBinding, [:uint, :uint, :uint], :void
    attach_function :glVertexArrayAttribFormat, [:uint, :uint, :int, :uint, :uchar, :uint], :void
    attach_function :glVertexArrayAttribIFormat, [:uint, :uint, :int, :uint, :uint], :void
    attach_function :glVertexArrayAttribLFormat, [:uint, :uint, :int, :uint, :uint], :void
    attach_function :glVertexArrayBindingDivisor, [:uint, :uint, :uint], :void
    attach_function :glVertexArrayElementBuffer, [:uint, :uint], :void
    attach_function :glVertexArrayVertexBuffer, [:uint, :uint, :uint, :int, :int], :void
    attach_function :glVertexArrayVertexBuffers, [:uint, :uint, :int, :pointer, :pointer, :pointer], :void
    attach_function :glVertexAttrib1d, [:uint, :double], :void
    attach_function :glVertexAttrib1dv, [:uint, :pointer], :void
    attach_function :glVertexAttrib1f, [:uint, :float], :void
    attach_function :glVertexAttrib1fv, [:uint, :pointer], :void
    attach_function :glVertexAttrib1s, [:uint, :short], :void
    attach_function :glVertexAttrib1sv, [:uint, :pointer], :void
    attach_function :glVertexAttrib2d, [:uint, :double, :double], :void
    attach_function :glVertexAttrib2dv, [:uint, :pointer], :void
    attach_function :glVertexAttrib2f, [:uint, :float, :float], :void
    attach_function :glVertexAttrib2fv, [:uint, :pointer], :void
    attach_function :glVertexAttrib2s, [:uint, :short, :short], :void
    attach_function :glVertexAttrib2sv, [:uint, :pointer], :void
    attach_function :glVertexAttrib3d, [:uint, :double, :double, :double], :void
    attach_function :glVertexAttrib3dv, [:uint, :pointer], :void
    attach_function :glVertexAttrib3f, [:uint, :float, :float, :float], :void
    attach_function :glVertexAttrib3fv, [:uint, :pointer], :void
    attach_function :glVertexAttrib3s, [:uint, :short, :short, :short], :void
    attach_function :glVertexAttrib3sv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4Nbv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4Niv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4Nsv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4Nub, [:uint, :uchar, :uchar, :uchar, :uchar], :void
    attach_function :glVertexAttrib4Nubv, [:uint, :string], :void
    attach_function :glVertexAttrib4Nuiv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4Nusv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4bv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4d, [:uint, :double, :double, :double, :double], :void
    attach_function :glVertexAttrib4dv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4f, [:uint, :float, :float, :float, :float], :void
    attach_function :glVertexAttrib4fv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4iv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4s, [:uint, :short, :short, :short, :short], :void
    attach_function :glVertexAttrib4sv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4ubv, [:uint, :string], :void
    attach_function :glVertexAttrib4uiv, [:uint, :pointer], :void
    attach_function :glVertexAttrib4usv, [:uint, :pointer], :void
    attach_function :glVertexAttribBinding, [:uint, :uint], :void
    attach_function :glVertexAttribDivisor, [:uint, :uint], :void
    attach_function :glVertexAttribFormat, [:uint, :int, :uint, :uchar, :uint], :void
    attach_function :glVertexAttribI1i, [:uint, :int], :void
    attach_function :glVertexAttribI1iv, [:uint, :pointer], :void
    attach_function :glVertexAttribI1ui, [:uint, :uint], :void
    attach_function :glVertexAttribI1uiv, [:uint, :pointer], :void
    attach_function :glVertexAttribI2i, [:uint, :int, :int], :void
    attach_function :glVertexAttribI2iv, [:uint, :pointer], :void
    attach_function :glVertexAttribI2ui, [:uint, :uint, :uint], :void
    attach_function :glVertexAttribI2uiv, [:uint, :pointer], :void
    attach_function :glVertexAttribI3i, [:uint, :int, :int, :int], :void
    attach_function :glVertexAttribI3iv, [:uint, :pointer], :void
    attach_function :glVertexAttribI3ui, [:uint, :uint, :uint, :uint], :void
    attach_function :glVertexAttribI3uiv, [:uint, :pointer], :void
    attach_function :glVertexAttribI4bv, [:uint, :pointer], :void
    attach_function :glVertexAttribI4i, [:uint, :int, :int, :int, :int], :void
    attach_function :glVertexAttribI4iv, [:uint, :pointer], :void
    attach_function :glVertexAttribI4sv, [:uint, :pointer], :void
    attach_function :glVertexAttribI4ubv, [:uint, :string], :void
    attach_function :glVertexAttribI4ui, [:uint, :uint, :uint, :uint, :uint], :void
    attach_function :glVertexAttribI4uiv, [:uint, :pointer], :void
    attach_function :glVertexAttribI4usv, [:uint, :pointer], :void
    attach_function :glVertexAttribIFormat, [:uint, :int, :uint, :uint], :void
    attach_function :glVertexAttribIPointer, [:uint, :int, :uint, :int, :pointer], :void
    attach_function :glVertexAttribL1d, [:uint, :double], :void
    attach_function :glVertexAttribL1dv, [:uint, :pointer], :void
    attach_function :glVertexAttribL2d, [:uint, :double, :double], :void
    attach_function :glVertexAttribL2dv, [:uint, :pointer], :void
    attach_function :glVertexAttribL3d, [:uint, :double, :double, :double], :void
    attach_function :glVertexAttribL3dv, [:uint, :pointer], :void
    attach_function :glVertexAttribL4d, [:uint, :double, :double, :double, :double], :void
    attach_function :glVertexAttribL4dv, [:uint, :pointer], :void
    attach_function :glVertexAttribLFormat, [:uint, :int, :uint, :uint], :void
    attach_function :glVertexAttribLPointer, [:uint, :int, :uint, :int, :pointer], :void
    attach_function :glVertexAttribP1ui, [:uint, :uint, :uchar, :uint], :void
    attach_function :glVertexAttribP1uiv, [:uint, :uint, :uchar, :pointer], :void
    attach_function :glVertexAttribP2ui, [:uint, :uint, :uchar, :uint], :void
    attach_function :glVertexAttribP2uiv, [:uint, :uint, :uchar, :pointer], :void
    attach_function :glVertexAttribP3ui, [:uint, :uint, :uchar, :uint], :void
    attach_function :glVertexAttribP3uiv, [:uint, :uint, :uchar, :pointer], :void
    attach_function :glVertexAttribP4ui, [:uint, :uint, :uchar, :uint], :void
    attach_function :glVertexAttribP4uiv, [:uint, :uint, :uchar, :pointer], :void
    attach_function :glVertexAttribPointer, [:uint, :int, :uint, :uchar, :int, :pointer], :void
    attach_function :glVertexBindingDivisor, [:uint, :uint], :void
    attach_function :glVertexP2ui, [:uint, :uint], :void
    attach_function :glVertexP2uiv, [:uint, :pointer], :void
    attach_function :glVertexP3ui, [:uint, :uint], :void
    attach_function :glVertexP3uiv, [:uint, :pointer], :void
    attach_function :glVertexP4ui, [:uint, :uint], :void
    attach_function :glVertexP4uiv, [:uint, :pointer], :void
    attach_function :glVertexPointer, [:int, :uint, :int, :pointer], :void
    attach_function :glViewport, [:int, :int, :int, :int], :void
    attach_function :glViewportArrayv, [:uint, :int, :pointer], :void
    attach_function :glViewportIndexedf, [:uint, :float, :float, :float, :float], :void
    attach_function :glViewportIndexedfv, [:uint, :pointer], :void
    attach_function :glWaitSync, [:pointer, :uint, :uint64], :void
    attach_function :glWindowPos2d, [:double, :double], :void
    attach_function :glWindowPos2dv, [:pointer], :void
    attach_function :glWindowPos2f, [:float, :float], :void
    attach_function :glWindowPos2fv, [:pointer], :void
    attach_function :glWindowPos2i, [:int, :int], :void
    attach_function :glWindowPos2iv, [:pointer], :void
    attach_function :glWindowPos2s, [:short, :short], :void
    attach_function :glWindowPos2sv, [:pointer], :void
    attach_function :glWindowPos3d, [:double, :double, :double], :void
    attach_function :glWindowPos3dv, [:pointer], :void
    attach_function :glWindowPos3f, [:float, :float, :float], :void
    attach_function :glWindowPos3fv, [:pointer], :void
    attach_function :glWindowPos3i, [:int, :int, :int], :void
    attach_function :glWindowPos3iv, [:pointer], :void
    attach_function :glWindowPos3s, [:short, :short, :short], :void
    attach_function :glWindowPos3sv, [:pointer], :void

    
    GL_2D = 0x0600
    GL_2_BYTES = 0x1407
    GL_3D = 0x0601
    GL_3D_COLOR = 0x0602
    GL_3D_COLOR_TEXTURE = 0x0603
    GL_3_BYTES = 0x1408
    GL_4D_COLOR_TEXTURE = 0x0604
    GL_4_BYTES = 0x1409
    GL_ACCUM = 0x0100
    GL_ACCUM_ALPHA_BITS = 0x0D5B
    GL_ACCUM_BLUE_BITS = 0x0D5A
    GL_ACCUM_BUFFER_BIT = 0x00000200
    GL_ACCUM_CLEAR_VALUE = 0x0B80
    GL_ACCUM_GREEN_BITS = 0x0D59
    GL_ACCUM_RED_BITS = 0x0D58
    GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9
    GL_ACTIVE_ATTRIBUTES = 0x8B89
    GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A
    GL_ACTIVE_PROGRAM = 0x8259
    GL_ACTIVE_RESOURCES = 0x92F5
    GL_ACTIVE_SUBROUTINES = 0x8DE5
    GL_ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48
    GL_ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6
    GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47
    GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49
    GL_ACTIVE_TEXTURE = 0x84E0
    GL_ACTIVE_UNIFORMS = 0x8B86
    GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36
    GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35
    GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87
    GL_ACTIVE_VARIABLES = 0x9305
    GL_ADD = 0x0104
    GL_ADD_SIGNED = 0x8574
    GL_ALIASED_LINE_WIDTH_RANGE = 0x846E
    GL_ALIASED_POINT_SIZE_RANGE = 0x846D
    GL_ALL_ATTRIB_BITS = 0xFFFFFFFF
    GL_ALL_BARRIER_BITS = 0xFFFFFFFF
    GL_ALL_SHADER_BITS = 0xFFFFFFFF
    GL_ALPHA = 0x1906
    GL_ALPHA12 = 0x803D
    GL_ALPHA16 = 0x803E
    GL_ALPHA4 = 0x803B
    GL_ALPHA8 = 0x803C
    GL_ALPHA_BIAS = 0x0D1D
    GL_ALPHA_BITS = 0x0D55
    GL_ALPHA_INTEGER = 0x8D97
    GL_ALPHA_SCALE = 0x0D1C
    GL_ALPHA_TEST = 0x0BC0
    GL_ALPHA_TEST_FUNC = 0x0BC1
    GL_ALPHA_TEST_REF = 0x0BC2
    GL_ALREADY_SIGNALED = 0x911A
    GL_ALWAYS = 0x0207
    GL_AMBIENT = 0x1200
    GL_AMBIENT_AND_DIFFUSE = 0x1602
    GL_AND = 0x1501
    GL_AND_INVERTED = 0x1504
    GL_AND_REVERSE = 0x1502
    GL_ANY_SAMPLES_PASSED = 0x8C2F
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A
    GL_ARRAY_BUFFER = 0x8892
    GL_ARRAY_BUFFER_BINDING = 0x8894
    GL_ARRAY_SIZE = 0x92FB
    GL_ARRAY_STRIDE = 0x92FE
    GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000
    GL_ATOMIC_COUNTER_BUFFER = 0x92C0
    GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5
    GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6
    GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1
    GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4
    GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7
    GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3
    GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2
    GL_ATTACHED_SHADERS = 0x8B85
    GL_ATTRIB_STACK_DEPTH = 0x0BB0
    GL_AUTO_GENERATE_MIPMAP = 0x8295
    GL_AUTO_NORMAL = 0x0D80
    GL_AUX0 = 0x0409
    GL_AUX1 = 0x040A
    GL_AUX2 = 0x040B
    GL_AUX3 = 0x040C
    GL_AUX_BUFFERS = 0x0C00
    GL_BACK = 0x0405
    GL_BACK_LEFT = 0x0402
    GL_BACK_RIGHT = 0x0403
    GL_BGR = 0x80E0
    GL_BGRA = 0x80E1
    GL_BGRA_INTEGER = 0x8D9B
    GL_BGR_INTEGER = 0x8D9A
    GL_BITMAP = 0x1A00
    GL_BITMAP_TOKEN = 0x0704
    GL_BLEND = 0x0BE2
    GL_BLEND_DST = 0x0BE0
    GL_BLEND_DST_ALPHA = 0x80CA
    GL_BLEND_DST_RGB = 0x80C8
    GL_BLEND_EQUATION_ALPHA = 0x883D
    GL_BLEND_EQUATION_RGB = 0x8009
    GL_BLEND_SRC = 0x0BE1
    GL_BLEND_SRC_ALPHA = 0x80CB
    GL_BLEND_SRC_RGB = 0x80C9
    GL_BLOCK_INDEX = 0x92FD
    GL_BLUE = 0x1905
    GL_BLUE_BIAS = 0x0D1B
    GL_BLUE_BITS = 0x0D54
    GL_BLUE_INTEGER = 0x8D96
    GL_BLUE_SCALE = 0x0D1A
    GL_BOOL = 0x8B56
    GL_BOOL_VEC2 = 0x8B57
    GL_BOOL_VEC3 = 0x8B58
    GL_BOOL_VEC4 = 0x8B59
    GL_BUFFER = 0x82E0
    GL_BUFFER_ACCESS = 0x88BB
    GL_BUFFER_ACCESS_FLAGS = 0x911F
    GL_BUFFER_BINDING = 0x9302
    GL_BUFFER_DATA_SIZE = 0x9303
    GL_BUFFER_IMMUTABLE_STORAGE = 0x821F
    GL_BUFFER_MAPPED = 0x88BC
    GL_BUFFER_MAP_LENGTH = 0x9120
    GL_BUFFER_MAP_OFFSET = 0x9121
    GL_BUFFER_MAP_POINTER = 0x88BD
    GL_BUFFER_SIZE = 0x8764
    GL_BUFFER_STORAGE_FLAGS = 0x8220
    GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200
    GL_BUFFER_USAGE = 0x8765
    GL_BUFFER_VARIABLE = 0x92E5
    GL_BYTE = 0x1400
    GL_C3F_V3F = 0x2A24
    GL_C4F_N3F_V3F = 0x2A26
    GL_C4UB_V2F = 0x2A22
    GL_C4UB_V3F = 0x2A23
    GL_CAVEAT_SUPPORT = 0x82B8
    GL_CCW = 0x0901
    GL_CLAMP = 0x2900
    GL_CLAMP_FRAGMENT_COLOR = 0x891B
    GL_CLAMP_READ_COLOR = 0x891C
    GL_CLAMP_TO_BORDER = 0x812D
    GL_CLAMP_TO_EDGE = 0x812F
    GL_CLAMP_VERTEX_COLOR = 0x891A
    GL_CLEAR = 0x1500
    GL_CLEAR_BUFFER = 0x82B4
    GL_CLEAR_TEXTURE = 0x9365
    GL_CLIENT_ACTIVE_TEXTURE = 0x84E1
    GL_CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF
    GL_CLIENT_ATTRIB_STACK_DEPTH = 0x0BB1
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000
    GL_CLIENT_PIXEL_STORE_BIT = 0x00000001
    GL_CLIENT_STORAGE_BIT = 0x0200
    GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002
    GL_CLIP_DEPTH_MODE = 0x935D
    GL_CLIP_DISTANCE0 = 0x3000
    GL_CLIP_DISTANCE1 = 0x3001
    GL_CLIP_DISTANCE2 = 0x3002
    GL_CLIP_DISTANCE3 = 0x3003
    GL_CLIP_DISTANCE4 = 0x3004
    GL_CLIP_DISTANCE5 = 0x3005
    GL_CLIP_DISTANCE6 = 0x3006
    GL_CLIP_DISTANCE7 = 0x3007
    GL_CLIP_ORIGIN = 0x935C
    GL_CLIP_PLANE0 = 0x3000
    GL_CLIP_PLANE1 = 0x3001
    GL_CLIP_PLANE2 = 0x3002
    GL_CLIP_PLANE3 = 0x3003
    GL_CLIP_PLANE4 = 0x3004
    GL_CLIP_PLANE5 = 0x3005
    GL_COEFF = 0x0A00
    GL_COLOR = 0x1800
    GL_COLOR_ARRAY = 0x8076
    GL_COLOR_ARRAY_BUFFER_BINDING = 0x8898
    GL_COLOR_ARRAY_POINTER = 0x8090
    GL_COLOR_ARRAY_SIZE = 0x8081
    GL_COLOR_ARRAY_STRIDE = 0x8083
    GL_COLOR_ARRAY_TYPE = 0x8082
    GL_COLOR_ATTACHMENT0 = 0x8CE0
    GL_COLOR_ATTACHMENT1 = 0x8CE1
    GL_COLOR_ATTACHMENT10 = 0x8CEA
    GL_COLOR_ATTACHMENT11 = 0x8CEB
    GL_COLOR_ATTACHMENT12 = 0x8CEC
    GL_COLOR_ATTACHMENT13 = 0x8CED
    GL_COLOR_ATTACHMENT14 = 0x8CEE
    GL_COLOR_ATTACHMENT15 = 0x8CEF
    GL_COLOR_ATTACHMENT2 = 0x8CE2
    GL_COLOR_ATTACHMENT3 = 0x8CE3
    GL_COLOR_ATTACHMENT4 = 0x8CE4
    GL_COLOR_ATTACHMENT5 = 0x8CE5
    GL_COLOR_ATTACHMENT6 = 0x8CE6
    GL_COLOR_ATTACHMENT7 = 0x8CE7
    GL_COLOR_ATTACHMENT8 = 0x8CE8
    GL_COLOR_ATTACHMENT9 = 0x8CE9
    GL_COLOR_BUFFER_BIT = 0x00004000
    GL_COLOR_CLEAR_VALUE = 0x0C22
    GL_COLOR_COMPONENTS = 0x8283
    GL_COLOR_ENCODING = 0x8296
    GL_COLOR_INDEX = 0x1900
    GL_COLOR_INDEXES = 0x1603
    GL_COLOR_LOGIC_OP = 0x0BF2
    GL_COLOR_MATERIAL = 0x0B57
    GL_COLOR_MATERIAL_FACE = 0x0B55
    GL_COLOR_MATERIAL_PARAMETER = 0x0B56
    GL_COLOR_RENDERABLE = 0x8286
    GL_COLOR_SUM = 0x8458
    GL_COLOR_WRITEMASK = 0x0C23
    GL_COMBINE = 0x8570
    GL_COMBINE_ALPHA = 0x8572
    GL_COMBINE_RGB = 0x8571
    GL_COMMAND_BARRIER_BIT = 0x00000040
    GL_COMPARE_REF_TO_TEXTURE = 0x884E
    GL_COMPARE_R_TO_TEXTURE = 0x884E
    GL_COMPATIBLE_SUBROUTINES = 0x8E4B
    GL_COMPILE = 0x1300
    GL_COMPILE_AND_EXECUTE = 0x1301
    GL_COMPILE_STATUS = 0x8B81
    GL_COMPRESSED_ALPHA = 0x84E9
    GL_COMPRESSED_INTENSITY = 0x84EC
    GL_COMPRESSED_LUMINANCE = 0x84EA
    GL_COMPRESSED_LUMINANCE_ALPHA = 0x84EB
    GL_COMPRESSED_R11_EAC = 0x9270
    GL_COMPRESSED_RED = 0x8225
    GL_COMPRESSED_RED_RGTC1 = 0x8DBB
    GL_COMPRESSED_RG = 0x8226
    GL_COMPRESSED_RG11_EAC = 0x9272
    GL_COMPRESSED_RGB = 0x84ED
    GL_COMPRESSED_RGB8_ETC2 = 0x9274
    GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276
    GL_COMPRESSED_RGBA = 0x84EE
    GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278
    GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C
    GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E
    GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F
    GL_COMPRESSED_RG_RGTC2 = 0x8DBD
    GL_COMPRESSED_SIGNED_R11_EAC = 0x9271
    GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC
    GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273
    GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE
    GL_COMPRESSED_SLUMINANCE = 0x8C4A
    GL_COMPRESSED_SLUMINANCE_ALPHA = 0x8C4B
    GL_COMPRESSED_SRGB = 0x8C48
    GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279
    GL_COMPRESSED_SRGB8_ETC2 = 0x9275
    GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277
    GL_COMPRESSED_SRGB_ALPHA = 0x8C49
    GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D
    GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3
    GL_COMPUTE_SHADER = 0x91B9
    GL_COMPUTE_SHADER_BIT = 0x00000020
    GL_COMPUTE_SUBROUTINE = 0x92ED
    GL_COMPUTE_SUBROUTINE_UNIFORM = 0x92F3
    GL_COMPUTE_TEXTURE = 0x82A0
    GL_COMPUTE_WORK_GROUP_SIZE = 0x8267
    GL_CONDITION_SATISFIED = 0x911C
    GL_CONSTANT = 0x8576
    GL_CONSTANT_ALPHA = 0x8003
    GL_CONSTANT_ATTENUATION = 0x1207
    GL_CONSTANT_COLOR = 0x8001
    GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002
    GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001
    GL_CONTEXT_FLAGS = 0x821E
    GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002
    GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004
    GL_CONTEXT_LOST = 0x0507
    GL_CONTEXT_PROFILE_MASK = 0x9126
    GL_CONTEXT_RELEASE_BEHAVIOR = 0x82FB
    GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC
    GL_COORD_REPLACE = 0x8862
    GL_COPY = 0x1503
    GL_COPY_INVERTED = 0x150C
    GL_COPY_PIXEL_TOKEN = 0x0706
    GL_COPY_READ_BUFFER = 0x8F36
    GL_COPY_READ_BUFFER_BINDING = 0x8F36
    GL_COPY_WRITE_BUFFER = 0x8F37
    GL_COPY_WRITE_BUFFER_BINDING = 0x8F37
    GL_CULL_FACE = 0x0B44
    GL_CULL_FACE_MODE = 0x0B45
    GL_CURRENT_BIT = 0x00000001
    GL_CURRENT_COLOR = 0x0B00
    GL_CURRENT_FOG_COORD = 0x8453
    GL_CURRENT_FOG_COORDINATE = 0x8453
    GL_CURRENT_INDEX = 0x0B01
    GL_CURRENT_NORMAL = 0x0B02
    GL_CURRENT_PROGRAM = 0x8B8D
    GL_CURRENT_QUERY = 0x8865
    GL_CURRENT_RASTER_COLOR = 0x0B04
    GL_CURRENT_RASTER_DISTANCE = 0x0B09
    GL_CURRENT_RASTER_INDEX = 0x0B05
    GL_CURRENT_RASTER_POSITION = 0x0B07
    GL_CURRENT_RASTER_POSITION_VALID = 0x0B08
    GL_CURRENT_RASTER_SECONDARY_COLOR = 0x845F
    GL_CURRENT_RASTER_TEXTURE_COORDS = 0x0B06
    GL_CURRENT_SECONDARY_COLOR = 0x8459
    GL_CURRENT_TEXTURE_COORDS = 0x0B03
    GL_CURRENT_VERTEX_ATTRIB = 0x8626
    GL_CW = 0x0900
    GL_DEBUG_CALLBACK_FUNCTION = 0x8244
    GL_DEBUG_CALLBACK_USER_PARAM = 0x8245
    GL_DEBUG_GROUP_STACK_DEPTH = 0x826D
    GL_DEBUG_LOGGED_MESSAGES = 0x9145
    GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243
    GL_DEBUG_OUTPUT = 0x92E0
    GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242
    GL_DEBUG_SEVERITY_HIGH = 0x9146
    GL_DEBUG_SEVERITY_LOW = 0x9148
    GL_DEBUG_SEVERITY_MEDIUM = 0x9147
    GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B
    GL_DEBUG_SOURCE_API = 0x8246
    GL_DEBUG_SOURCE_APPLICATION = 0x824A
    GL_DEBUG_SOURCE_OTHER = 0x824B
    GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248
    GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249
    GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247
    GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D
    GL_DEBUG_TYPE_ERROR = 0x824C
    GL_DEBUG_TYPE_MARKER = 0x8268
    GL_DEBUG_TYPE_OTHER = 0x8251
    GL_DEBUG_TYPE_PERFORMANCE = 0x8250
    GL_DEBUG_TYPE_POP_GROUP = 0x826A
    GL_DEBUG_TYPE_PORTABILITY = 0x824F
    GL_DEBUG_TYPE_PUSH_GROUP = 0x8269
    GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E
    GL_DECAL = 0x2101
    GL_DECR = 0x1E03
    GL_DECR_WRAP = 0x8508
    GL_DELETE_STATUS = 0x8B80
    GL_DEPTH = 0x1801
    GL_DEPTH24_STENCIL8 = 0x88F0
    GL_DEPTH32F_STENCIL8 = 0x8CAD
    GL_DEPTH_ATTACHMENT = 0x8D00
    GL_DEPTH_BIAS = 0x0D1F
    GL_DEPTH_BITS = 0x0D56
    GL_DEPTH_BUFFER_BIT = 0x00000100
    GL_DEPTH_CLAMP = 0x864F
    GL_DEPTH_CLEAR_VALUE = 0x0B73
    GL_DEPTH_COMPONENT = 0x1902
    GL_DEPTH_COMPONENT16 = 0x81A5
    GL_DEPTH_COMPONENT24 = 0x81A6
    GL_DEPTH_COMPONENT32 = 0x81A7
    GL_DEPTH_COMPONENT32F = 0x8CAC
    GL_DEPTH_COMPONENTS = 0x8284
    GL_DEPTH_FUNC = 0x0B74
    GL_DEPTH_RANGE = 0x0B70
    GL_DEPTH_RENDERABLE = 0x8287
    GL_DEPTH_SCALE = 0x0D1E
    GL_DEPTH_STENCIL = 0x84F9
    GL_DEPTH_STENCIL_ATTACHMENT = 0x821A
    GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA
    GL_DEPTH_TEST = 0x0B71
    GL_DEPTH_TEXTURE_MODE = 0x884B
    GL_DEPTH_WRITEMASK = 0x0B72
    GL_DIFFUSE = 0x1201
    GL_DISPATCH_INDIRECT_BUFFER = 0x90EE
    GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF
    GL_DISPLAY_LIST = 0x82E7
    GL_DITHER = 0x0BD0
    GL_DOMAIN = 0x0A02
    GL_DONT_CARE = 0x1100
    GL_DOT3_RGB = 0x86AE
    GL_DOT3_RGBA = 0x86AF
    GL_DOUBLE = 0x140A
    GL_DOUBLEBUFFER = 0x0C32
    GL_DOUBLE_MAT2 = 0x8F46
    GL_DOUBLE_MAT2x3 = 0x8F49
    GL_DOUBLE_MAT2x4 = 0x8F4A
    GL_DOUBLE_MAT3 = 0x8F47
    GL_DOUBLE_MAT3x2 = 0x8F4B
    GL_DOUBLE_MAT3x4 = 0x8F4C
    GL_DOUBLE_MAT4 = 0x8F48
    GL_DOUBLE_MAT4x2 = 0x8F4D
    GL_DOUBLE_MAT4x3 = 0x8F4E
    GL_DOUBLE_VEC2 = 0x8FFC
    GL_DOUBLE_VEC3 = 0x8FFD
    GL_DOUBLE_VEC4 = 0x8FFE
    GL_DRAW_BUFFER = 0x0C01
    GL_DRAW_BUFFER0 = 0x8825
    GL_DRAW_BUFFER1 = 0x8826
    GL_DRAW_BUFFER10 = 0x882F
    GL_DRAW_BUFFER11 = 0x8830
    GL_DRAW_BUFFER12 = 0x8831
    GL_DRAW_BUFFER13 = 0x8832
    GL_DRAW_BUFFER14 = 0x8833
    GL_DRAW_BUFFER15 = 0x8834
    GL_DRAW_BUFFER2 = 0x8827
    GL_DRAW_BUFFER3 = 0x8828
    GL_DRAW_BUFFER4 = 0x8829
    GL_DRAW_BUFFER5 = 0x882A
    GL_DRAW_BUFFER6 = 0x882B
    GL_DRAW_BUFFER7 = 0x882C
    GL_DRAW_BUFFER8 = 0x882D
    GL_DRAW_BUFFER9 = 0x882E
    GL_DRAW_FRAMEBUFFER = 0x8CA9
    GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6
    GL_DRAW_INDIRECT_BUFFER = 0x8F3F
    GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43
    GL_DRAW_PIXEL_TOKEN = 0x0705
    GL_DST_ALPHA = 0x0304
    GL_DST_COLOR = 0x0306
    GL_DYNAMIC_COPY = 0x88EA
    GL_DYNAMIC_DRAW = 0x88E8
    GL_DYNAMIC_READ = 0x88E9
    GL_DYNAMIC_STORAGE_BIT = 0x0100
    GL_EDGE_FLAG = 0x0B43
    GL_EDGE_FLAG_ARRAY = 0x8079
    GL_EDGE_FLAG_ARRAY_BUFFER_BINDING = 0x889B
    GL_EDGE_FLAG_ARRAY_POINTER = 0x8093
    GL_EDGE_FLAG_ARRAY_STRIDE = 0x808C
    GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002
    GL_ELEMENT_ARRAY_BUFFER = 0x8893
    GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895
    GL_EMISSION = 0x1600
    GL_ENABLE_BIT = 0x00002000
    GL_EQUAL = 0x0202
    GL_EQUIV = 0x1509
    GL_EVAL_BIT = 0x00010000
    GL_EXP = 0x0800
    GL_EXP2 = 0x0801
    GL_EXTENSIONS = 0x1F03
    GL_EYE_LINEAR = 0x2400
    GL_EYE_PLANE = 0x2502
    GL_FALSE = 0
    GL_FASTEST = 0x1101
    GL_FEEDBACK = 0x1C01
    GL_FEEDBACK_BUFFER_POINTER = 0x0DF0
    GL_FEEDBACK_BUFFER_SIZE = 0x0DF1
    GL_FEEDBACK_BUFFER_TYPE = 0x0DF2
    GL_FILL = 0x1B02
    GL_FILTER = 0x829A
    GL_FIRST_VERTEX_CONVENTION = 0x8E4D
    GL_FIXED = 0x140C
    GL_FIXED_ONLY = 0x891D
    GL_FLAT = 0x1D00
    GL_FLOAT = 0x1406
    GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD
    GL_FLOAT_MAT2 = 0x8B5A
    GL_FLOAT_MAT2x3 = 0x8B65
    GL_FLOAT_MAT2x4 = 0x8B66
    GL_FLOAT_MAT3 = 0x8B5B
    GL_FLOAT_MAT3x2 = 0x8B67
    GL_FLOAT_MAT3x4 = 0x8B68
    GL_FLOAT_MAT4 = 0x8B5C
    GL_FLOAT_MAT4x2 = 0x8B69
    GL_FLOAT_MAT4x3 = 0x8B6A
    GL_FLOAT_VEC2 = 0x8B50
    GL_FLOAT_VEC3 = 0x8B51
    GL_FLOAT_VEC4 = 0x8B52
    GL_FOG = 0x0B60
    GL_FOG_BIT = 0x00000080
    GL_FOG_COLOR = 0x0B66
    GL_FOG_COORD = 0x8451
    GL_FOG_COORDINATE = 0x8451
    GL_FOG_COORDINATE_ARRAY = 0x8457
    GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING = 0x889D
    GL_FOG_COORDINATE_ARRAY_POINTER = 0x8456
    GL_FOG_COORDINATE_ARRAY_STRIDE = 0x8455
    GL_FOG_COORDINATE_ARRAY_TYPE = 0x8454
    GL_FOG_COORDINATE_SOURCE = 0x8450
    GL_FOG_COORD_ARRAY = 0x8457
    GL_FOG_COORD_ARRAY_BUFFER_BINDING = 0x889D
    GL_FOG_COORD_ARRAY_POINTER = 0x8456
    GL_FOG_COORD_ARRAY_STRIDE = 0x8455
    GL_FOG_COORD_ARRAY_TYPE = 0x8454
    GL_FOG_COORD_SRC = 0x8450
    GL_FOG_DENSITY = 0x0B62
    GL_FOG_END = 0x0B64
    GL_FOG_HINT = 0x0C54
    GL_FOG_INDEX = 0x0B61
    GL_FOG_MODE = 0x0B65
    GL_FOG_START = 0x0B63
    GL_FRACTIONAL_EVEN = 0x8E7C
    GL_FRACTIONAL_ODD = 0x8E7B
    GL_FRAGMENT_DEPTH = 0x8452
    GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D
    GL_FRAGMENT_SHADER = 0x8B30
    GL_FRAGMENT_SHADER_BIT = 0x00000002
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B
    GL_FRAGMENT_SUBROUTINE = 0x92EC
    GL_FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2
    GL_FRAGMENT_TEXTURE = 0x829F
    GL_FRAMEBUFFER = 0x8D40
    GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215
    GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214
    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211
    GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216
    GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0
    GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212
    GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2
    GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400
    GL_FRAMEBUFFER_BINDING = 0x8CA6
    GL_FRAMEBUFFER_BLEND = 0x828B
    GL_FRAMEBUFFER_COMPLETE = 0x8CD5
    GL_FRAMEBUFFER_DEFAULT = 0x8218
    GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314
    GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311
    GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312
    GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313
    GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6
    GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56
    GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC
    GL_FRAMEBUFFER_RENDERABLE = 0x8289
    GL_FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A
    GL_FRAMEBUFFER_SRGB = 0x8DB9
    GL_FRAMEBUFFER_UNDEFINED = 0x8219
    GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD
    GL_FRONT = 0x0404
    GL_FRONT_AND_BACK = 0x0408
    GL_FRONT_FACE = 0x0B46
    GL_FRONT_LEFT = 0x0400
    GL_FRONT_RIGHT = 0x0401
    GL_FULL_SUPPORT = 0x82B7
    GL_FUNC_ADD = 0x8006
    GL_FUNC_REVERSE_SUBTRACT = 0x800B
    GL_FUNC_SUBTRACT = 0x800A
    GL_GENERATE_MIPMAP = 0x8191
    GL_GENERATE_MIPMAP_HINT = 0x8192
    GL_GEOMETRY_INPUT_TYPE = 0x8917
    GL_GEOMETRY_OUTPUT_TYPE = 0x8918
    GL_GEOMETRY_SHADER = 0x8DD9
    GL_GEOMETRY_SHADER_BIT = 0x00000004
    GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F
    GL_GEOMETRY_SUBROUTINE = 0x92EB
    GL_GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1
    GL_GEOMETRY_TEXTURE = 0x829E
    GL_GEOMETRY_VERTICES_OUT = 0x8916
    GL_GEQUAL = 0x0206
    GL_GET_TEXTURE_IMAGE_FORMAT = 0x8291
    GL_GET_TEXTURE_IMAGE_TYPE = 0x8292
    GL_GREATER = 0x0204
    GL_GREEN = 0x1904
    GL_GREEN_BIAS = 0x0D19
    GL_GREEN_BITS = 0x0D53
    GL_GREEN_INTEGER = 0x8D95
    GL_GREEN_SCALE = 0x0D18
    GL_GUILTY_CONTEXT_RESET = 0x8253
    GL_HALF_FLOAT = 0x140B
    GL_HIGH_FLOAT = 0x8DF2
    GL_HIGH_INT = 0x8DF5
    GL_HINT_BIT = 0x00008000
    GL_IMAGE_1D = 0x904C
    GL_IMAGE_1D_ARRAY = 0x9052
    GL_IMAGE_2D = 0x904D
    GL_IMAGE_2D_ARRAY = 0x9053
    GL_IMAGE_2D_MULTISAMPLE = 0x9055
    GL_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056
    GL_IMAGE_2D_RECT = 0x904F
    GL_IMAGE_3D = 0x904E
    GL_IMAGE_BINDING_ACCESS = 0x8F3E
    GL_IMAGE_BINDING_FORMAT = 0x906E
    GL_IMAGE_BINDING_LAYER = 0x8F3D
    GL_IMAGE_BINDING_LAYERED = 0x8F3C
    GL_IMAGE_BINDING_LEVEL = 0x8F3B
    GL_IMAGE_BINDING_NAME = 0x8F3A
    GL_IMAGE_BUFFER = 0x9051
    GL_IMAGE_CLASS_10_10_10_2 = 0x82C3
    GL_IMAGE_CLASS_11_11_10 = 0x82C2
    GL_IMAGE_CLASS_1_X_16 = 0x82BE
    GL_IMAGE_CLASS_1_X_32 = 0x82BB
    GL_IMAGE_CLASS_1_X_8 = 0x82C1
    GL_IMAGE_CLASS_2_X_16 = 0x82BD
    GL_IMAGE_CLASS_2_X_32 = 0x82BA
    GL_IMAGE_CLASS_2_X_8 = 0x82C0
    GL_IMAGE_CLASS_4_X_16 = 0x82BC
    GL_IMAGE_CLASS_4_X_32 = 0x82B9
    GL_IMAGE_CLASS_4_X_8 = 0x82BF
    GL_IMAGE_COMPATIBILITY_CLASS = 0x82A8
    GL_IMAGE_CUBE = 0x9050
    GL_IMAGE_CUBE_MAP_ARRAY = 0x9054
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8
    GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7
    GL_IMAGE_PIXEL_FORMAT = 0x82A9
    GL_IMAGE_PIXEL_TYPE = 0x82AA
    GL_IMAGE_TEXEL_SIZE = 0x82A7
    GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B
    GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A
    GL_INCR = 0x1E02
    GL_INCR_WRAP = 0x8507
    GL_INDEX = 0x8222
    GL_INDEX_ARRAY = 0x8077
    GL_INDEX_ARRAY_BUFFER_BINDING = 0x8899
    GL_INDEX_ARRAY_POINTER = 0x8091
    GL_INDEX_ARRAY_STRIDE = 0x8086
    GL_INDEX_ARRAY_TYPE = 0x8085
    GL_INDEX_BITS = 0x0D51
    GL_INDEX_CLEAR_VALUE = 0x0C20
    GL_INDEX_LOGIC_OP = 0x0BF1
    GL_INDEX_MODE = 0x0C30
    GL_INDEX_OFFSET = 0x0D13
    GL_INDEX_SHIFT = 0x0D12
    GL_INDEX_WRITEMASK = 0x0C21
    GL_INFO_LOG_LENGTH = 0x8B84
    GL_INNOCENT_CONTEXT_RESET = 0x8254
    GL_INT = 0x1404
    GL_INTENSITY = 0x8049
    GL_INTENSITY12 = 0x804C
    GL_INTENSITY16 = 0x804D
    GL_INTENSITY4 = 0x804A
    GL_INTENSITY8 = 0x804B
    GL_INTERLEAVED_ATTRIBS = 0x8C8C
    GL_INTERNALFORMAT_ALPHA_SIZE = 0x8274
    GL_INTERNALFORMAT_ALPHA_TYPE = 0x827B
    GL_INTERNALFORMAT_BLUE_SIZE = 0x8273
    GL_INTERNALFORMAT_BLUE_TYPE = 0x827A
    GL_INTERNALFORMAT_DEPTH_SIZE = 0x8275
    GL_INTERNALFORMAT_DEPTH_TYPE = 0x827C
    GL_INTERNALFORMAT_GREEN_SIZE = 0x8272
    GL_INTERNALFORMAT_GREEN_TYPE = 0x8279
    GL_INTERNALFORMAT_PREFERRED = 0x8270
    GL_INTERNALFORMAT_RED_SIZE = 0x8271
    GL_INTERNALFORMAT_RED_TYPE = 0x8278
    GL_INTERNALFORMAT_SHARED_SIZE = 0x8277
    GL_INTERNALFORMAT_STENCIL_SIZE = 0x8276
    GL_INTERNALFORMAT_STENCIL_TYPE = 0x827D
    GL_INTERNALFORMAT_SUPPORTED = 0x826F
    GL_INTERPOLATE = 0x8575
    GL_INT_2_10_10_10_REV = 0x8D9F
    GL_INT_IMAGE_1D = 0x9057
    GL_INT_IMAGE_1D_ARRAY = 0x905D
    GL_INT_IMAGE_2D = 0x9058
    GL_INT_IMAGE_2D_ARRAY = 0x905E
    GL_INT_IMAGE_2D_MULTISAMPLE = 0x9060
    GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061
    GL_INT_IMAGE_2D_RECT = 0x905A
    GL_INT_IMAGE_3D = 0x9059
    GL_INT_IMAGE_BUFFER = 0x905C
    GL_INT_IMAGE_CUBE = 0x905B
    GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F
    GL_INT_SAMPLER_1D = 0x8DC9
    GL_INT_SAMPLER_1D_ARRAY = 0x8DCE
    GL_INT_SAMPLER_2D = 0x8DCA
    GL_INT_SAMPLER_2D_ARRAY = 0x8DCF
    GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109
    GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C
    GL_INT_SAMPLER_2D_RECT = 0x8DCD
    GL_INT_SAMPLER_3D = 0x8DCB
    GL_INT_SAMPLER_BUFFER = 0x8DD0
    GL_INT_SAMPLER_CUBE = 0x8DCC
    GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E
    GL_INT_VEC2 = 0x8B53
    GL_INT_VEC3 = 0x8B54
    GL_INT_VEC4 = 0x8B55
    GL_INVALID_ENUM = 0x0500
    GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506
    GL_INVALID_INDEX = 0xFFFFFFFF
    GL_INVALID_OPERATION = 0x0502
    GL_INVALID_VALUE = 0x0501
    GL_INVERT = 0x150A
    GL_ISOLINES = 0x8E7A
    GL_IS_PER_PATCH = 0x92E7
    GL_IS_ROW_MAJOR = 0x9300
    GL_KEEP = 0x1E00
    GL_LAST_VERTEX_CONVENTION = 0x8E4E
    GL_LAYER_PROVOKING_VERTEX = 0x825E
    GL_LEFT = 0x0406
    GL_LEQUAL = 0x0203
    GL_LESS = 0x0201
    GL_LIGHT0 = 0x4000
    GL_LIGHT1 = 0x4001
    GL_LIGHT2 = 0x4002
    GL_LIGHT3 = 0x4003
    GL_LIGHT4 = 0x4004
    GL_LIGHT5 = 0x4005
    GL_LIGHT6 = 0x4006
    GL_LIGHT7 = 0x4007
    GL_LIGHTING = 0x0B50
    GL_LIGHTING_BIT = 0x00000040
    GL_LIGHT_MODEL_AMBIENT = 0x0B53
    GL_LIGHT_MODEL_COLOR_CONTROL = 0x81F8
    GL_LIGHT_MODEL_LOCAL_VIEWER = 0x0B51
    GL_LIGHT_MODEL_TWO_SIDE = 0x0B52
    GL_LINE = 0x1B01
    GL_LINEAR = 0x2601
    GL_LINEAR_ATTENUATION = 0x1208
    GL_LINEAR_MIPMAP_LINEAR = 0x2703
    GL_LINEAR_MIPMAP_NEAREST = 0x2701
    GL_LINES = 0x0001
    GL_LINES_ADJACENCY = 0x000A
    GL_LINE_BIT = 0x00000004
    GL_LINE_LOOP = 0x0002
    GL_LINE_RESET_TOKEN = 0x0707
    GL_LINE_SMOOTH = 0x0B20
    GL_LINE_SMOOTH_HINT = 0x0C52
    GL_LINE_STIPPLE = 0x0B24
    GL_LINE_STIPPLE_PATTERN = 0x0B25
    GL_LINE_STIPPLE_REPEAT = 0x0B26
    GL_LINE_STRIP = 0x0003
    GL_LINE_STRIP_ADJACENCY = 0x000B
    GL_LINE_TOKEN = 0x0702
    GL_LINE_WIDTH = 0x0B21
    GL_LINE_WIDTH_GRANULARITY = 0x0B23
    GL_LINE_WIDTH_RANGE = 0x0B22
    GL_LINK_STATUS = 0x8B82
    GL_LIST_BASE = 0x0B32
    GL_LIST_BIT = 0x00020000
    GL_LIST_INDEX = 0x0B33
    GL_LIST_MODE = 0x0B30
    GL_LOAD = 0x0101
    GL_LOCATION = 0x930E
    GL_LOCATION_COMPONENT = 0x934A
    GL_LOCATION_INDEX = 0x930F
    GL_LOGIC_OP = 0x0BF1
    GL_LOGIC_OP_MODE = 0x0BF0
    GL_LOSE_CONTEXT_ON_RESET = 0x8252
    GL_LOWER_LEFT = 0x8CA1
    GL_LOW_FLOAT = 0x8DF0
    GL_LOW_INT = 0x8DF3
    GL_LUMINANCE = 0x1909
    GL_LUMINANCE12 = 0x8041
    GL_LUMINANCE12_ALPHA12 = 0x8047
    GL_LUMINANCE12_ALPHA4 = 0x8046
    GL_LUMINANCE16 = 0x8042
    GL_LUMINANCE16_ALPHA16 = 0x8048
    GL_LUMINANCE4 = 0x803F
    GL_LUMINANCE4_ALPHA4 = 0x8043
    GL_LUMINANCE6_ALPHA2 = 0x8044
    GL_LUMINANCE8 = 0x8040
    GL_LUMINANCE8_ALPHA8 = 0x8045
    GL_LUMINANCE_ALPHA = 0x190A
    GL_MAJOR_VERSION = 0x821B
    GL_MANUAL_GENERATE_MIPMAP = 0x8294
    GL_MAP1_COLOR_4 = 0x0D90
    GL_MAP1_GRID_DOMAIN = 0x0DD0
    GL_MAP1_GRID_SEGMENTS = 0x0DD1
    GL_MAP1_INDEX = 0x0D91
    GL_MAP1_NORMAL = 0x0D92
    GL_MAP1_TEXTURE_COORD_1 = 0x0D93
    GL_MAP1_TEXTURE_COORD_2 = 0x0D94
    GL_MAP1_TEXTURE_COORD_3 = 0x0D95
    GL_MAP1_TEXTURE_COORD_4 = 0x0D96
    GL_MAP1_VERTEX_3 = 0x0D97
    GL_MAP1_VERTEX_4 = 0x0D98
    GL_MAP2_COLOR_4 = 0x0DB0
    GL_MAP2_GRID_DOMAIN = 0x0DD2
    GL_MAP2_GRID_SEGMENTS = 0x0DD3
    GL_MAP2_INDEX = 0x0DB1
    GL_MAP2_NORMAL = 0x0DB2
    GL_MAP2_TEXTURE_COORD_1 = 0x0DB3
    GL_MAP2_TEXTURE_COORD_2 = 0x0DB4
    GL_MAP2_TEXTURE_COORD_3 = 0x0DB5
    GL_MAP2_TEXTURE_COORD_4 = 0x0DB6
    GL_MAP2_VERTEX_3 = 0x0DB7
    GL_MAP2_VERTEX_4 = 0x0DB8
    GL_MAP_COHERENT_BIT = 0x0080
    GL_MAP_COLOR = 0x0D10
    GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010
    GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008
    GL_MAP_INVALIDATE_RANGE_BIT = 0x0004
    GL_MAP_PERSISTENT_BIT = 0x0040
    GL_MAP_READ_BIT = 0x0001
    GL_MAP_STENCIL = 0x0D11
    GL_MAP_UNSYNCHRONIZED_BIT = 0x0020
    GL_MAP_WRITE_BIT = 0x0002
    GL_MATRIX_MODE = 0x0BA0
    GL_MATRIX_STRIDE = 0x92FF
    GL_MAX = 0x8008
    GL_MAX_3D_TEXTURE_SIZE = 0x8073
    GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF
    GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC
    GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8
    GL_MAX_ATTRIB_STACK_DEPTH = 0x0D35
    GL_MAX_CLIENT_ATTRIB_STACK_DEPTH = 0x0D3B
    GL_MAX_CLIP_DISTANCES = 0x0D32
    GL_MAX_CLIP_PLANES = 0x0D32
    GL_MAX_COLOR_ATTACHMENTS = 0x8CDF
    GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E
    GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7
    GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1
    GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA
    GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266
    GL_MAX_COMBINED_DIMENSIONS = 0x8282
    GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32
    GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF
    GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39
    GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39
    GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D
    GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E
    GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31
    GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265
    GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264
    GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD
    GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB
    GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262
    GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC
    GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB
    GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263
    GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE
    GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB
    GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF
    GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C
    GL_MAX_CULL_DISTANCES = 0x82F9
    GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C
    GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144
    GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143
    GL_MAX_DEPTH = 0x8280
    GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F
    GL_MAX_DRAW_BUFFERS = 0x8824
    GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC
    GL_MAX_ELEMENTS_INDICES = 0x80E9
    GL_MAX_ELEMENTS_VERTICES = 0x80E8
    GL_MAX_ELEMENT_INDEX = 0x8D6B
    GL_MAX_EVAL_ORDER = 0x0D30
    GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6
    GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0
    GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE
    GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125
    GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C
    GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA
    GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D
    GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49
    GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD
    GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316
    GL_MAX_FRAMEBUFFER_LAYERS = 0x9317
    GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318
    GL_MAX_FRAMEBUFFER_WIDTH = 0x9315
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD
    GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124
    GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF
    GL_MAX_HEIGHT = 0x827F
    GL_MAX_IMAGE_SAMPLES = 0x906D
    GL_MAX_IMAGE_UNITS = 0x8F38
    GL_MAX_INTEGER_SAMPLES = 0x9110
    GL_MAX_LABEL_LENGTH = 0x82E8
    GL_MAX_LAYERS = 0x8281
    GL_MAX_LIGHTS = 0x0D31
    GL_MAX_LIST_NESTING = 0x0B31
    GL_MAX_MODELVIEW_STACK_DEPTH = 0x0D36
    GL_MAX_NAME_LENGTH = 0x92F6
    GL_MAX_NAME_STACK_DEPTH = 0x0D37
    GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7
    GL_MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8
    GL_MAX_PATCH_VERTICES = 0x8E7D
    GL_MAX_PIXEL_MAP_TABLE = 0x0D34
    GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905
    GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F
    GL_MAX_PROJECTION_STACK_DEPTH = 0x0D38
    GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8
    GL_MAX_RENDERBUFFER_SIZE = 0x84E8
    GL_MAX_SAMPLES = 0x8D57
    GL_MAX_SAMPLE_MASK_WORDS = 0x8E59
    GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111
    GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE
    GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD
    GL_MAX_SUBROUTINES = 0x8DE7
    GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80
    GL_MAX_TESS_GEN_LEVEL = 0x8E7E
    GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84
    GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B
    GL_MAX_TEXTURE_COORDS = 0x8871
    GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872
    GL_MAX_TEXTURE_LOD_BIAS = 0x84FD
    GL_MAX_TEXTURE_SIZE = 0x0D33
    GL_MAX_TEXTURE_STACK_DEPTH = 0x0D39
    GL_MAX_TEXTURE_UNITS = 0x84E2
    GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70
    GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80
    GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30
    GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F
    GL_MAX_UNIFORM_LOCATIONS = 0x826E
    GL_MAX_VARYING_COMPONENTS = 0x8B4B
    GL_MAX_VARYING_FLOATS = 0x8B4B
    GL_MAX_VARYING_VECTORS = 0x8DFC
    GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2
    GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC
    GL_MAX_VERTEX_ATTRIBS = 0x8869
    GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA
    GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9
    GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5
    GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA
    GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122
    GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6
    GL_MAX_VERTEX_STREAMS = 0x8E71
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C
    GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B
    GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A
    GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB
    GL_MAX_VIEWPORTS = 0x825B
    GL_MAX_VIEWPORT_DIMS = 0x0D3A
    GL_MAX_WIDTH = 0x827E
    GL_MEDIUM_FLOAT = 0x8DF1
    GL_MEDIUM_INT = 0x8DF4
    GL_MIN = 0x8007
    GL_MINOR_VERSION = 0x821C
    GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B
    GL_MIN_MAP_BUFFER_ALIGNMENT = 0x90BC
    GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904
    GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E
    GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37
    GL_MIPMAP = 0x8293
    GL_MIRRORED_REPEAT = 0x8370
    GL_MIRROR_CLAMP_TO_EDGE = 0x8743
    GL_MODELVIEW = 0x1700
    GL_MODELVIEW_MATRIX = 0x0BA6
    GL_MODELVIEW_STACK_DEPTH = 0x0BA3
    GL_MODULATE = 0x2100
    GL_MULT = 0x0103
    GL_MULTISAMPLE = 0x809D
    GL_MULTISAMPLE_BIT = 0x20000000
    GL_N3F_V3F = 0x2A25
    GL_NAME_LENGTH = 0x92F9
    GL_NAME_STACK_DEPTH = 0x0D70
    GL_NAND = 0x150E
    GL_NEAREST = 0x2600
    GL_NEAREST_MIPMAP_LINEAR = 0x2702
    GL_NEAREST_MIPMAP_NEAREST = 0x2700
    GL_NEGATIVE_ONE_TO_ONE = 0x935E
    GL_NEVER = 0x0200
    GL_NICEST = 0x1102
    GL_NONE = 0
    GL_NOOP = 0x1505
    GL_NOR = 0x1508
    GL_NORMALIZE = 0x0BA1
    GL_NORMAL_ARRAY = 0x8075
    GL_NORMAL_ARRAY_BUFFER_BINDING = 0x8897
    GL_NORMAL_ARRAY_POINTER = 0x808F
    GL_NORMAL_ARRAY_STRIDE = 0x807F
    GL_NORMAL_ARRAY_TYPE = 0x807E
    GL_NORMAL_MAP = 0x8511
    GL_NOTEQUAL = 0x0205
    GL_NO_ERROR = 0
    GL_NO_RESET_NOTIFICATION = 0x8261
    GL_NUM_ACTIVE_VARIABLES = 0x9304
    GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A
    GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2
    GL_NUM_EXTENSIONS = 0x821D
    GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE
    GL_NUM_SAMPLE_COUNTS = 0x9380
    GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9
    GL_NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9
    GL_OBJECT_LINEAR = 0x2401
    GL_OBJECT_PLANE = 0x2501
    GL_OBJECT_TYPE = 0x9112
    GL_OFFSET = 0x92FC
    GL_ONE = 1
    GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004
    GL_ONE_MINUS_CONSTANT_COLOR = 0x8002
    GL_ONE_MINUS_DST_ALPHA = 0x0305
    GL_ONE_MINUS_DST_COLOR = 0x0307
    GL_ONE_MINUS_SRC1_ALPHA = 0x88FB
    GL_ONE_MINUS_SRC1_COLOR = 0x88FA
    GL_ONE_MINUS_SRC_ALPHA = 0x0303
    GL_ONE_MINUS_SRC_COLOR = 0x0301
    GL_OPERAND0_ALPHA = 0x8598
    GL_OPERAND0_RGB = 0x8590
    GL_OPERAND1_ALPHA = 0x8599
    GL_OPERAND1_RGB = 0x8591
    GL_OPERAND2_ALPHA = 0x859A
    GL_OPERAND2_RGB = 0x8592
    GL_OR = 0x1507
    GL_ORDER = 0x0A01
    GL_OR_INVERTED = 0x150D
    GL_OR_REVERSE = 0x150B
    GL_OUT_OF_MEMORY = 0x0505
    GL_PACK_ALIGNMENT = 0x0D05
    GL_PACK_COMPRESSED_BLOCK_DEPTH = 0x912D
    GL_PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C
    GL_PACK_COMPRESSED_BLOCK_SIZE = 0x912E
    GL_PACK_COMPRESSED_BLOCK_WIDTH = 0x912B
    GL_PACK_IMAGE_HEIGHT = 0x806C
    GL_PACK_LSB_FIRST = 0x0D01
    GL_PACK_ROW_LENGTH = 0x0D02
    GL_PACK_SKIP_IMAGES = 0x806B
    GL_PACK_SKIP_PIXELS = 0x0D04
    GL_PACK_SKIP_ROWS = 0x0D03
    GL_PACK_SWAP_BYTES = 0x0D00
    GL_PASS_THROUGH_TOKEN = 0x0700
    GL_PATCHES = 0x000E
    GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73
    GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74
    GL_PATCH_VERTICES = 0x8E72
    GL_PERSPECTIVE_CORRECTION_HINT = 0x0C50
    GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080
    GL_PIXEL_MAP_A_TO_A = 0x0C79
    GL_PIXEL_MAP_A_TO_A_SIZE = 0x0CB9
    GL_PIXEL_MAP_B_TO_B = 0x0C78
    GL_PIXEL_MAP_B_TO_B_SIZE = 0x0CB8
    GL_PIXEL_MAP_G_TO_G = 0x0C77
    GL_PIXEL_MAP_G_TO_G_SIZE = 0x0CB7
    GL_PIXEL_MAP_I_TO_A = 0x0C75
    GL_PIXEL_MAP_I_TO_A_SIZE = 0x0CB5
    GL_PIXEL_MAP_I_TO_B = 0x0C74
    GL_PIXEL_MAP_I_TO_B_SIZE = 0x0CB4
    GL_PIXEL_MAP_I_TO_G = 0x0C73
    GL_PIXEL_MAP_I_TO_G_SIZE = 0x0CB3
    GL_PIXEL_MAP_I_TO_I = 0x0C70
    GL_PIXEL_MAP_I_TO_I_SIZE = 0x0CB0
    GL_PIXEL_MAP_I_TO_R = 0x0C72
    GL_PIXEL_MAP_I_TO_R_SIZE = 0x0CB2
    GL_PIXEL_MAP_R_TO_R = 0x0C76
    GL_PIXEL_MAP_R_TO_R_SIZE = 0x0CB6
    GL_PIXEL_MAP_S_TO_S = 0x0C71
    GL_PIXEL_MAP_S_TO_S_SIZE = 0x0CB1
    GL_PIXEL_MODE_BIT = 0x00000020
    GL_PIXEL_PACK_BUFFER = 0x88EB
    GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED
    GL_PIXEL_UNPACK_BUFFER = 0x88EC
    GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF
    GL_POINT = 0x1B00
    GL_POINTS = 0x0000
    GL_POINT_BIT = 0x00000002
    GL_POINT_DISTANCE_ATTENUATION = 0x8129
    GL_POINT_FADE_THRESHOLD_SIZE = 0x8128
    GL_POINT_SIZE = 0x0B11
    GL_POINT_SIZE_GRANULARITY = 0x0B13
    GL_POINT_SIZE_MAX = 0x8127
    GL_POINT_SIZE_MIN = 0x8126
    GL_POINT_SIZE_RANGE = 0x0B12
    GL_POINT_SMOOTH = 0x0B10
    GL_POINT_SMOOTH_HINT = 0x0C51
    GL_POINT_SPRITE = 0x8861
    GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0
    GL_POINT_TOKEN = 0x0701
    GL_POLYGON = 0x0009
    GL_POLYGON_BIT = 0x00000008
    GL_POLYGON_MODE = 0x0B40
    GL_POLYGON_OFFSET_FACTOR = 0x8038
    GL_POLYGON_OFFSET_FILL = 0x8037
    GL_POLYGON_OFFSET_LINE = 0x2A02
    GL_POLYGON_OFFSET_POINT = 0x2A01
    GL_POLYGON_OFFSET_UNITS = 0x2A00
    GL_POLYGON_SMOOTH = 0x0B41
    GL_POLYGON_SMOOTH_HINT = 0x0C53
    GL_POLYGON_STIPPLE = 0x0B42
    GL_POLYGON_STIPPLE_BIT = 0x00000010
    GL_POLYGON_TOKEN = 0x0703
    GL_POSITION = 0x1203
    GL_PREVIOUS = 0x8578
    GL_PRIMARY_COLOR = 0x8577
    GL_PRIMITIVES_GENERATED = 0x8C87
    GL_PRIMITIVE_RESTART = 0x8F9D
    GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69
    GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221
    GL_PRIMITIVE_RESTART_INDEX = 0x8F9E
    GL_PROGRAM = 0x82E2
    GL_PROGRAM_BINARY_FORMATS = 0x87FF
    GL_PROGRAM_BINARY_LENGTH = 0x8741
    GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257
    GL_PROGRAM_INPUT = 0x92E3
    GL_PROGRAM_OUTPUT = 0x92E4
    GL_PROGRAM_PIPELINE = 0x82E4
    GL_PROGRAM_PIPELINE_BINDING = 0x825A
    GL_PROGRAM_POINT_SIZE = 0x8642
    GL_PROGRAM_SEPARABLE = 0x8258
    GL_PROJECTION = 0x1701
    GL_PROJECTION_MATRIX = 0x0BA7
    GL_PROJECTION_STACK_DEPTH = 0x0BA4
    GL_PROVOKING_VERTEX = 0x8E4F
    GL_PROXY_TEXTURE_1D = 0x8063
    GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19
    GL_PROXY_TEXTURE_2D = 0x8064
    GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B
    GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101
    GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103
    GL_PROXY_TEXTURE_3D = 0x8070
    GL_PROXY_TEXTURE_CUBE_MAP = 0x851B
    GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B
    GL_PROXY_TEXTURE_RECTANGLE = 0x84F7
    GL_Q = 0x2003
    GL_QUADRATIC_ATTENUATION = 0x1209
    GL_QUADS = 0x0007
    GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C
    GL_QUAD_STRIP = 0x0008
    GL_QUERY = 0x82E3
    GL_QUERY_BUFFER = 0x9192
    GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000
    GL_QUERY_BUFFER_BINDING = 0x9193
    GL_QUERY_BY_REGION_NO_WAIT = 0x8E16
    GL_QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A
    GL_QUERY_BY_REGION_WAIT = 0x8E15
    GL_QUERY_BY_REGION_WAIT_INVERTED = 0x8E19
    GL_QUERY_COUNTER_BITS = 0x8864
    GL_QUERY_NO_WAIT = 0x8E14
    GL_QUERY_NO_WAIT_INVERTED = 0x8E18
    GL_QUERY_RESULT = 0x8866
    GL_QUERY_RESULT_AVAILABLE = 0x8867
    GL_QUERY_RESULT_NO_WAIT = 0x9194
    GL_QUERY_TARGET = 0x82EA
    GL_QUERY_WAIT = 0x8E13
    GL_QUERY_WAIT_INVERTED = 0x8E17
    GL_R = 0x2002
    GL_R11F_G11F_B10F = 0x8C3A
    GL_R16 = 0x822A
    GL_R16F = 0x822D
    GL_R16I = 0x8233
    GL_R16UI = 0x8234
    GL_R16_SNORM = 0x8F98
    GL_R32F = 0x822E
    GL_R32I = 0x8235
    GL_R32UI = 0x8236
    GL_R3_G3_B2 = 0x2A10
    GL_R8 = 0x8229
    GL_R8I = 0x8231
    GL_R8UI = 0x8232
    GL_R8_SNORM = 0x8F94
    GL_RASTERIZER_DISCARD = 0x8C89
    GL_READ_BUFFER = 0x0C02
    GL_READ_FRAMEBUFFER = 0x8CA8
    GL_READ_FRAMEBUFFER_BINDING = 0x8CAA
    GL_READ_ONLY = 0x88B8
    GL_READ_PIXELS = 0x828C
    GL_READ_PIXELS_FORMAT = 0x828D
    GL_READ_PIXELS_TYPE = 0x828E
    GL_READ_WRITE = 0x88BA
    GL_RED = 0x1903
    GL_RED_BIAS = 0x0D15
    GL_RED_BITS = 0x0D52
    GL_RED_INTEGER = 0x8D94
    GL_RED_SCALE = 0x0D14
    GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B
    GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A
    GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309
    GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308
    GL_REFERENCED_BY_VERTEX_SHADER = 0x9306
    GL_REFLECTION_MAP = 0x8512
    GL_RENDER = 0x1C00
    GL_RENDERBUFFER = 0x8D41
    GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53
    GL_RENDERBUFFER_BINDING = 0x8CA7
    GL_RENDERBUFFER_BLUE_SIZE = 0x8D52
    GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54
    GL_RENDERBUFFER_GREEN_SIZE = 0x8D51
    GL_RENDERBUFFER_HEIGHT = 0x8D43
    GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44
    GL_RENDERBUFFER_RED_SIZE = 0x8D50
    GL_RENDERBUFFER_SAMPLES = 0x8CAB
    GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55
    GL_RENDERBUFFER_WIDTH = 0x8D42
    GL_RENDERER = 0x1F01
    GL_RENDER_MODE = 0x0C40
    GL_REPEAT = 0x2901
    GL_REPLACE = 0x1E01
    GL_RESCALE_NORMAL = 0x803A
    GL_RESET_NOTIFICATION_STRATEGY = 0x8256
    GL_RETURN = 0x0102
    GL_RG = 0x8227
    GL_RG16 = 0x822C
    GL_RG16F = 0x822F
    GL_RG16I = 0x8239
    GL_RG16UI = 0x823A
    GL_RG16_SNORM = 0x8F99
    GL_RG32F = 0x8230
    GL_RG32I = 0x823B
    GL_RG32UI = 0x823C
    GL_RG8 = 0x822B
    GL_RG8I = 0x8237
    GL_RG8UI = 0x8238
    GL_RG8_SNORM = 0x8F95
    GL_RGB = 0x1907
    GL_RGB10 = 0x8052
    GL_RGB10_A2 = 0x8059
    GL_RGB10_A2UI = 0x906F
    GL_RGB12 = 0x8053
    GL_RGB16 = 0x8054
    GL_RGB16F = 0x881B
    GL_RGB16I = 0x8D89
    GL_RGB16UI = 0x8D77
    GL_RGB16_SNORM = 0x8F9A
    GL_RGB32F = 0x8815
    GL_RGB32I = 0x8D83
    GL_RGB32UI = 0x8D71
    GL_RGB4 = 0x804F
    GL_RGB5 = 0x8050
    GL_RGB565 = 0x8D62
    GL_RGB5_A1 = 0x8057
    GL_RGB8 = 0x8051
    GL_RGB8I = 0x8D8F
    GL_RGB8UI = 0x8D7D
    GL_RGB8_SNORM = 0x8F96
    GL_RGB9_E5 = 0x8C3D
    GL_RGBA = 0x1908
    GL_RGBA12 = 0x805A
    GL_RGBA16 = 0x805B
    GL_RGBA16F = 0x881A
    GL_RGBA16I = 0x8D88
    GL_RGBA16UI = 0x8D76
    GL_RGBA16_SNORM = 0x8F9B
    GL_RGBA2 = 0x8055
    GL_RGBA32F = 0x8814
    GL_RGBA32I = 0x8D82
    GL_RGBA32UI = 0x8D70
    GL_RGBA4 = 0x8056
    GL_RGBA8 = 0x8058
    GL_RGBA8I = 0x8D8E
    GL_RGBA8UI = 0x8D7C
    GL_RGBA8_SNORM = 0x8F97
    GL_RGBA_INTEGER = 0x8D99
    GL_RGBA_MODE = 0x0C31
    GL_RGB_INTEGER = 0x8D98
    GL_RGB_SCALE = 0x8573
    GL_RG_INTEGER = 0x8228
    GL_RIGHT = 0x0407
    GL_S = 0x2000
    GL_SAMPLER = 0x82E6
    GL_SAMPLER_1D = 0x8B5D
    GL_SAMPLER_1D_ARRAY = 0x8DC0
    GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3
    GL_SAMPLER_1D_SHADOW = 0x8B61
    GL_SAMPLER_2D = 0x8B5E
    GL_SAMPLER_2D_ARRAY = 0x8DC1
    GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4
    GL_SAMPLER_2D_MULTISAMPLE = 0x9108
    GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B
    GL_SAMPLER_2D_RECT = 0x8B63
    GL_SAMPLER_2D_RECT_SHADOW = 0x8B64
    GL_SAMPLER_2D_SHADOW = 0x8B62
    GL_SAMPLER_3D = 0x8B5F
    GL_SAMPLER_BINDING = 0x8919
    GL_SAMPLER_BUFFER = 0x8DC2
    GL_SAMPLER_CUBE = 0x8B60
    GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D
    GL_SAMPLER_CUBE_SHADOW = 0x8DC5
    GL_SAMPLES = 0x80A9
    GL_SAMPLES_PASSED = 0x8914
    GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E
    GL_SAMPLE_ALPHA_TO_ONE = 0x809F
    GL_SAMPLE_BUFFERS = 0x80A8
    GL_SAMPLE_COVERAGE = 0x80A0
    GL_SAMPLE_COVERAGE_INVERT = 0x80AB
    GL_SAMPLE_COVERAGE_VALUE = 0x80AA
    GL_SAMPLE_MASK = 0x8E51
    GL_SAMPLE_MASK_VALUE = 0x8E52
    GL_SAMPLE_POSITION = 0x8E50
    GL_SAMPLE_SHADING = 0x8C36
    GL_SCISSOR_BIT = 0x00080000
    GL_SCISSOR_BOX = 0x0C10
    GL_SCISSOR_TEST = 0x0C11
    GL_SECONDARY_COLOR_ARRAY = 0x845E
    GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING = 0x889C
    GL_SECONDARY_COLOR_ARRAY_POINTER = 0x845D
    GL_SECONDARY_COLOR_ARRAY_SIZE = 0x845A
    GL_SECONDARY_COLOR_ARRAY_STRIDE = 0x845C
    GL_SECONDARY_COLOR_ARRAY_TYPE = 0x845B
    GL_SELECT = 0x1C02
    GL_SELECTION_BUFFER_POINTER = 0x0DF3
    GL_SELECTION_BUFFER_SIZE = 0x0DF4
    GL_SEPARATE_ATTRIBS = 0x8C8D
    GL_SEPARATE_SPECULAR_COLOR = 0x81FA
    GL_SET = 0x150F
    GL_SHADER = 0x82E1
    GL_SHADER_BINARY_FORMATS = 0x8DF8
    GL_SHADER_COMPILER = 0x8DFA
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020
    GL_SHADER_IMAGE_ATOMIC = 0x82A6
    GL_SHADER_IMAGE_LOAD = 0x82A4
    GL_SHADER_IMAGE_STORE = 0x82A5
    GL_SHADER_SOURCE_LENGTH = 0x8B88
    GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000
    GL_SHADER_STORAGE_BLOCK = 0x92E6
    GL_SHADER_STORAGE_BUFFER = 0x90D2
    GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3
    GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF
    GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5
    GL_SHADER_STORAGE_BUFFER_START = 0x90D4
    GL_SHADER_TYPE = 0x8B4F
    GL_SHADE_MODEL = 0x0B54
    GL_SHADING_LANGUAGE_VERSION = 0x8B8C
    GL_SHININESS = 0x1601
    GL_SHORT = 0x1402
    GL_SIGNALED = 0x9119
    GL_SIGNED_NORMALIZED = 0x8F9C
    GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC
    GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE
    GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD
    GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF
    GL_SINGLE_COLOR = 0x81F9
    GL_SLUMINANCE = 0x8C46
    GL_SLUMINANCE8 = 0x8C47
    GL_SLUMINANCE8_ALPHA8 = 0x8C45
    GL_SLUMINANCE_ALPHA = 0x8C44
    GL_SMOOTH = 0x1D01
    GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23
    GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22
    GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13
    GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12
    GL_SOURCE0_ALPHA = 0x8588
    GL_SOURCE0_RGB = 0x8580
    GL_SOURCE1_ALPHA = 0x8589
    GL_SOURCE1_RGB = 0x8581
    GL_SOURCE2_ALPHA = 0x858A
    GL_SOURCE2_RGB = 0x8582
    GL_SPECULAR = 0x1202
    GL_SPHERE_MAP = 0x2402
    GL_SPOT_CUTOFF = 0x1206
    GL_SPOT_DIRECTION = 0x1204
    GL_SPOT_EXPONENT = 0x1205
    GL_SRC0_ALPHA = 0x8588
    GL_SRC0_RGB = 0x8580
    GL_SRC1_ALPHA = 0x8589
    GL_SRC1_COLOR = 0x88F9
    GL_SRC1_RGB = 0x8581
    GL_SRC2_ALPHA = 0x858A
    GL_SRC2_RGB = 0x8582
    GL_SRC_ALPHA = 0x0302
    GL_SRC_ALPHA_SATURATE = 0x0308
    GL_SRC_COLOR = 0x0300
    GL_SRGB = 0x8C40
    GL_SRGB8 = 0x8C41
    GL_SRGB8_ALPHA8 = 0x8C43
    GL_SRGB_ALPHA = 0x8C42
    GL_SRGB_READ = 0x8297
    GL_SRGB_WRITE = 0x8298
    GL_STACK_OVERFLOW = 0x0503
    GL_STACK_UNDERFLOW = 0x0504
    GL_STATIC_COPY = 0x88E6
    GL_STATIC_DRAW = 0x88E4
    GL_STATIC_READ = 0x88E5
    GL_STENCIL = 0x1802
    GL_STENCIL_ATTACHMENT = 0x8D20
    GL_STENCIL_BACK_FAIL = 0x8801
    GL_STENCIL_BACK_FUNC = 0x8800
    GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802
    GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803
    GL_STENCIL_BACK_REF = 0x8CA3
    GL_STENCIL_BACK_VALUE_MASK = 0x8CA4
    GL_STENCIL_BACK_WRITEMASK = 0x8CA5
    GL_STENCIL_BITS = 0x0D57
    GL_STENCIL_BUFFER_BIT = 0x00000400
    GL_STENCIL_CLEAR_VALUE = 0x0B91
    GL_STENCIL_COMPONENTS = 0x8285
    GL_STENCIL_FAIL = 0x0B94
    GL_STENCIL_FUNC = 0x0B92
    GL_STENCIL_INDEX = 0x1901
    GL_STENCIL_INDEX1 = 0x8D46
    GL_STENCIL_INDEX16 = 0x8D49
    GL_STENCIL_INDEX4 = 0x8D47
    GL_STENCIL_INDEX8 = 0x8D48
    GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95
    GL_STENCIL_PASS_DEPTH_PASS = 0x0B96
    GL_STENCIL_REF = 0x0B97
    GL_STENCIL_RENDERABLE = 0x8288
    GL_STENCIL_TEST = 0x0B90
    GL_STENCIL_VALUE_MASK = 0x0B93
    GL_STENCIL_WRITEMASK = 0x0B98
    GL_STEREO = 0x0C33
    GL_STREAM_COPY = 0x88E2
    GL_STREAM_DRAW = 0x88E0
    GL_STREAM_READ = 0x88E1
    GL_SUBPIXEL_BITS = 0x0D50
    GL_SUBTRACT = 0x84E7
    GL_SYNC_CONDITION = 0x9113
    GL_SYNC_FENCE = 0x9116
    GL_SYNC_FLAGS = 0x9115
    GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001
    GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117
    GL_SYNC_STATUS = 0x9114
    GL_T = 0x2001
    GL_T2F_C3F_V3F = 0x2A2A
    GL_T2F_C4F_N3F_V3F = 0x2A2C
    GL_T2F_C4UB_V3F = 0x2A29
    GL_T2F_N3F_V3F = 0x2A2B
    GL_T2F_V3F = 0x2A27
    GL_T4F_C4F_N3F_V4F = 0x2A2D
    GL_T4F_V4F = 0x2A28
    GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75
    GL_TESS_CONTROL_SHADER = 0x8E88
    GL_TESS_CONTROL_SHADER_BIT = 0x00000008
    GL_TESS_CONTROL_SUBROUTINE = 0x92E9
    GL_TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF
    GL_TESS_CONTROL_TEXTURE = 0x829C
    GL_TESS_EVALUATION_SHADER = 0x8E87
    GL_TESS_EVALUATION_SHADER_BIT = 0x00000010
    GL_TESS_EVALUATION_SUBROUTINE = 0x92EA
    GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0
    GL_TESS_EVALUATION_TEXTURE = 0x829D
    GL_TESS_GEN_MODE = 0x8E76
    GL_TESS_GEN_POINT_MODE = 0x8E79
    GL_TESS_GEN_SPACING = 0x8E77
    GL_TESS_GEN_VERTEX_ORDER = 0x8E78
    GL_TEXTURE = 0x1702
    GL_TEXTURE0 = 0x84C0
    GL_TEXTURE1 = 0x84C1
    GL_TEXTURE10 = 0x84CA
    GL_TEXTURE11 = 0x84CB
    GL_TEXTURE12 = 0x84CC
    GL_TEXTURE13 = 0x84CD
    GL_TEXTURE14 = 0x84CE
    GL_TEXTURE15 = 0x84CF
    GL_TEXTURE16 = 0x84D0
    GL_TEXTURE17 = 0x84D1
    GL_TEXTURE18 = 0x84D2
    GL_TEXTURE19 = 0x84D3
    GL_TEXTURE2 = 0x84C2
    GL_TEXTURE20 = 0x84D4
    GL_TEXTURE21 = 0x84D5
    GL_TEXTURE22 = 0x84D6
    GL_TEXTURE23 = 0x84D7
    GL_TEXTURE24 = 0x84D8
    GL_TEXTURE25 = 0x84D9
    GL_TEXTURE26 = 0x84DA
    GL_TEXTURE27 = 0x84DB
    GL_TEXTURE28 = 0x84DC
    GL_TEXTURE29 = 0x84DD
    GL_TEXTURE3 = 0x84C3
    GL_TEXTURE30 = 0x84DE
    GL_TEXTURE31 = 0x84DF
    GL_TEXTURE4 = 0x84C4
    GL_TEXTURE5 = 0x84C5
    GL_TEXTURE6 = 0x84C6
    GL_TEXTURE7 = 0x84C7
    GL_TEXTURE8 = 0x84C8
    GL_TEXTURE9 = 0x84C9
    GL_TEXTURE_1D = 0x0DE0
    GL_TEXTURE_1D_ARRAY = 0x8C18
    GL_TEXTURE_2D = 0x0DE1
    GL_TEXTURE_2D_ARRAY = 0x8C1A
    GL_TEXTURE_2D_MULTISAMPLE = 0x9100
    GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102
    GL_TEXTURE_3D = 0x806F
    GL_TEXTURE_ALPHA_SIZE = 0x805F
    GL_TEXTURE_ALPHA_TYPE = 0x8C13
    GL_TEXTURE_BASE_LEVEL = 0x813C
    GL_TEXTURE_BINDING = 0x82EB
    GL_TEXTURE_BINDING_1D = 0x8068
    GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C
    GL_TEXTURE_BINDING_2D = 0x8069
    GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D
    GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104
    GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105
    GL_TEXTURE_BINDING_3D = 0x806A
    GL_TEXTURE_BINDING_BUFFER = 0x8C2C
    GL_TEXTURE_BINDING_CUBE_MAP = 0x8514
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A
    GL_TEXTURE_BINDING_RECTANGLE = 0x84F6
    GL_TEXTURE_BIT = 0x00040000
    GL_TEXTURE_BLUE_SIZE = 0x805E
    GL_TEXTURE_BLUE_TYPE = 0x8C12
    GL_TEXTURE_BORDER = 0x1005
    GL_TEXTURE_BORDER_COLOR = 0x1004
    GL_TEXTURE_BUFFER = 0x8C2A
    GL_TEXTURE_BUFFER_BINDING = 0x8C2A
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D
    GL_TEXTURE_BUFFER_OFFSET = 0x919D
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F
    GL_TEXTURE_BUFFER_SIZE = 0x919E
    GL_TEXTURE_COMPARE_FUNC = 0x884D
    GL_TEXTURE_COMPARE_MODE = 0x884C
    GL_TEXTURE_COMPONENTS = 0x1003
    GL_TEXTURE_COMPRESSED = 0x86A1
    GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2
    GL_TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3
    GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1
    GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0
    GL_TEXTURE_COMPRESSION_HINT = 0x84EF
    GL_TEXTURE_COORD_ARRAY = 0x8078
    GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 0x889A
    GL_TEXTURE_COORD_ARRAY_POINTER = 0x8092
    GL_TEXTURE_COORD_ARRAY_SIZE = 0x8088
    GL_TEXTURE_COORD_ARRAY_STRIDE = 0x808A
    GL_TEXTURE_COORD_ARRAY_TYPE = 0x8089
    GL_TEXTURE_CUBE_MAP = 0x8513
    GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009
    GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A
    GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515
    GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517
    GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519
    GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F
    GL_TEXTURE_DEPTH = 0x8071
    GL_TEXTURE_DEPTH_SIZE = 0x884A
    GL_TEXTURE_DEPTH_TYPE = 0x8C16
    GL_TEXTURE_ENV = 0x2300
    GL_TEXTURE_ENV_COLOR = 0x2201
    GL_TEXTURE_ENV_MODE = 0x2200
    GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008
    GL_TEXTURE_FILTER_CONTROL = 0x8500
    GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107
    GL_TEXTURE_GATHER = 0x82A2
    GL_TEXTURE_GATHER_SHADOW = 0x82A3
    GL_TEXTURE_GEN_MODE = 0x2500
    GL_TEXTURE_GEN_Q = 0x0C63
    GL_TEXTURE_GEN_R = 0x0C62
    GL_TEXTURE_GEN_S = 0x0C60
    GL_TEXTURE_GEN_T = 0x0C61
    GL_TEXTURE_GREEN_SIZE = 0x805D
    GL_TEXTURE_GREEN_TYPE = 0x8C11
    GL_TEXTURE_HEIGHT = 0x1001
    GL_TEXTURE_IMAGE_FORMAT = 0x828F
    GL_TEXTURE_IMAGE_TYPE = 0x8290
    GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F
    GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF
    GL_TEXTURE_INTENSITY_SIZE = 0x8061
    GL_TEXTURE_INTENSITY_TYPE = 0x8C15
    GL_TEXTURE_INTERNAL_FORMAT = 0x1003
    GL_TEXTURE_LOD_BIAS = 0x8501
    GL_TEXTURE_LUMINANCE_SIZE = 0x8060
    GL_TEXTURE_LUMINANCE_TYPE = 0x8C14
    GL_TEXTURE_MAG_FILTER = 0x2800
    GL_TEXTURE_MATRIX = 0x0BA8
    GL_TEXTURE_MAX_LEVEL = 0x813D
    GL_TEXTURE_MAX_LOD = 0x813B
    GL_TEXTURE_MIN_FILTER = 0x2801
    GL_TEXTURE_MIN_LOD = 0x813A
    GL_TEXTURE_PRIORITY = 0x8066
    GL_TEXTURE_RECTANGLE = 0x84F5
    GL_TEXTURE_RED_SIZE = 0x805C
    GL_TEXTURE_RED_TYPE = 0x8C10
    GL_TEXTURE_RESIDENT = 0x8067
    GL_TEXTURE_SAMPLES = 0x9106
    GL_TEXTURE_SHADOW = 0x82A1
    GL_TEXTURE_SHARED_SIZE = 0x8C3F
    GL_TEXTURE_STACK_DEPTH = 0x0BA5
    GL_TEXTURE_STENCIL_SIZE = 0x88F1
    GL_TEXTURE_SWIZZLE_A = 0x8E45
    GL_TEXTURE_SWIZZLE_B = 0x8E44
    GL_TEXTURE_SWIZZLE_G = 0x8E43
    GL_TEXTURE_SWIZZLE_R = 0x8E42
    GL_TEXTURE_SWIZZLE_RGBA = 0x8E46
    GL_TEXTURE_TARGET = 0x1006
    GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100
    GL_TEXTURE_VIEW = 0x82B5
    GL_TEXTURE_VIEW_MIN_LAYER = 0x82DD
    GL_TEXTURE_VIEW_MIN_LEVEL = 0x82DB
    GL_TEXTURE_VIEW_NUM_LAYERS = 0x82DE
    GL_TEXTURE_VIEW_NUM_LEVELS = 0x82DC
    GL_TEXTURE_WIDTH = 0x1000
    GL_TEXTURE_WRAP_R = 0x8072
    GL_TEXTURE_WRAP_S = 0x2802
    GL_TEXTURE_WRAP_T = 0x2803
    GL_TIMEOUT_EXPIRED = 0x911B
    GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF
    GL_TIMESTAMP = 0x8E28
    GL_TIME_ELAPSED = 0x88BF
    GL_TOP_LEVEL_ARRAY_SIZE = 0x930C
    GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D
    GL_TRANSFORM_BIT = 0x00001000
    GL_TRANSFORM_FEEDBACK = 0x8E22
    GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800
    GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25
    GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E
    GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24
    GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F
    GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B
    GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F
    GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23
    GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85
    GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84
    GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C
    GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23
    GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88
    GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4
    GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83
    GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76
    GL_TRANSPOSE_COLOR_MATRIX = 0x84E6
    GL_TRANSPOSE_MODELVIEW_MATRIX = 0x84E3
    GL_TRANSPOSE_PROJECTION_MATRIX = 0x84E4
    GL_TRANSPOSE_TEXTURE_MATRIX = 0x84E5
    GL_TRIANGLES = 0x0004
    GL_TRIANGLES_ADJACENCY = 0x000C
    GL_TRIANGLE_FAN = 0x0006
    GL_TRIANGLE_STRIP = 0x0005
    GL_TRIANGLE_STRIP_ADJACENCY = 0x000D
    GL_TRUE = 1
    GL_TYPE = 0x92FA
    GL_UNDEFINED_VERTEX = 0x8260
    GL_UNIFORM = 0x92E1
    GL_UNIFORM_ARRAY_STRIDE = 0x8A3C
    GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA
    GL_UNIFORM_BARRIER_BIT = 0x00000004
    GL_UNIFORM_BLOCK = 0x92E2
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43
    GL_UNIFORM_BLOCK_BINDING = 0x8A3F
    GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40
    GL_UNIFORM_BLOCK_INDEX = 0x8A3A
    GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41
    GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC
    GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46
    GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45
    GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0
    GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1
    GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44
    GL_UNIFORM_BUFFER = 0x8A11
    GL_UNIFORM_BUFFER_BINDING = 0x8A28
    GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34
    GL_UNIFORM_BUFFER_SIZE = 0x8A2A
    GL_UNIFORM_BUFFER_START = 0x8A29
    GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E
    GL_UNIFORM_MATRIX_STRIDE = 0x8A3D
    GL_UNIFORM_NAME_LENGTH = 0x8A39
    GL_UNIFORM_OFFSET = 0x8A3B
    GL_UNIFORM_SIZE = 0x8A38
    GL_UNIFORM_TYPE = 0x8A37
    GL_UNKNOWN_CONTEXT_RESET = 0x8255
    GL_UNPACK_ALIGNMENT = 0x0CF5
    GL_UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129
    GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128
    GL_UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A
    GL_UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127
    GL_UNPACK_IMAGE_HEIGHT = 0x806E
    GL_UNPACK_LSB_FIRST = 0x0CF1
    GL_UNPACK_ROW_LENGTH = 0x0CF2
    GL_UNPACK_SKIP_IMAGES = 0x806D
    GL_UNPACK_SKIP_PIXELS = 0x0CF4
    GL_UNPACK_SKIP_ROWS = 0x0CF3
    GL_UNPACK_SWAP_BYTES = 0x0CF0
    GL_UNSIGNALED = 0x9118
    GL_UNSIGNED_BYTE = 0x1401
    GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362
    GL_UNSIGNED_BYTE_3_3_2 = 0x8032
    GL_UNSIGNED_INT = 0x1405
    GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B
    GL_UNSIGNED_INT_10_10_10_2 = 0x8036
    GL_UNSIGNED_INT_24_8 = 0x84FA
    GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368
    GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E
    GL_UNSIGNED_INT_8_8_8_8 = 0x8035
    GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367
    GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB
    GL_UNSIGNED_INT_IMAGE_1D = 0x9062
    GL_UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068
    GL_UNSIGNED_INT_IMAGE_2D = 0x9063
    GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069
    GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B
    GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C
    GL_UNSIGNED_INT_IMAGE_2D_RECT = 0x9065
    GL_UNSIGNED_INT_IMAGE_3D = 0x9064
    GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067
    GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A
    GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1
    GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6
    GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2
    GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D
    GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5
    GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3
    GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8
    GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F
    GL_UNSIGNED_INT_VEC2 = 0x8DC6
    GL_UNSIGNED_INT_VEC3 = 0x8DC7
    GL_UNSIGNED_INT_VEC4 = 0x8DC8
    GL_UNSIGNED_NORMALIZED = 0x8C17
    GL_UNSIGNED_SHORT = 0x1403
    GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366
    GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033
    GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365
    GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034
    GL_UNSIGNED_SHORT_5_6_5 = 0x8363
    GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364
    GL_UPPER_LEFT = 0x8CA2
    GL_V2F = 0x2A20
    GL_V3F = 0x2A21
    GL_VALIDATE_STATUS = 0x8B83
    GL_VENDOR = 0x1F00
    GL_VERSION = 0x1F02
    GL_VERTEX_ARRAY = 0x8074
    GL_VERTEX_ARRAY_BINDING = 0x85B5
    GL_VERTEX_ARRAY_BUFFER_BINDING = 0x8896
    GL_VERTEX_ARRAY_POINTER = 0x808E
    GL_VERTEX_ARRAY_SIZE = 0x807A
    GL_VERTEX_ARRAY_STRIDE = 0x807C
    GL_VERTEX_ARRAY_TYPE = 0x807B
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE
    GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622
    GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD
    GL_VERTEX_ATTRIB_ARRAY_LONG = 0x874E
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A
    GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645
    GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623
    GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624
    GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625
    GL_VERTEX_ATTRIB_BINDING = 0x82D4
    GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5
    GL_VERTEX_BINDING_BUFFER = 0x8F4F
    GL_VERTEX_BINDING_DIVISOR = 0x82D6
    GL_VERTEX_BINDING_OFFSET = 0x82D7
    GL_VERTEX_BINDING_STRIDE = 0x82D8
    GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642
    GL_VERTEX_PROGRAM_TWO_SIDE = 0x8643
    GL_VERTEX_SHADER = 0x8B31
    GL_VERTEX_SHADER_BIT = 0x00000001
    GL_VERTEX_SUBROUTINE = 0x92E8
    GL_VERTEX_SUBROUTINE_UNIFORM = 0x92EE
    GL_VERTEX_TEXTURE = 0x829B
    GL_VIEWPORT = 0x0BA2
    GL_VIEWPORT_BIT = 0x00000800
    GL_VIEWPORT_BOUNDS_RANGE = 0x825D
    GL_VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F
    GL_VIEWPORT_SUBPIXEL_BITS = 0x825C
    GL_VIEW_CLASS_128_BITS = 0x82C4
    GL_VIEW_CLASS_16_BITS = 0x82CA
    GL_VIEW_CLASS_24_BITS = 0x82C9
    GL_VIEW_CLASS_32_BITS = 0x82C8
    GL_VIEW_CLASS_48_BITS = 0x82C7
    GL_VIEW_CLASS_64_BITS = 0x82C6
    GL_VIEW_CLASS_8_BITS = 0x82CB
    GL_VIEW_CLASS_96_BITS = 0x82C5
    GL_VIEW_CLASS_BPTC_FLOAT = 0x82D3
    GL_VIEW_CLASS_BPTC_UNORM = 0x82D2
    GL_VIEW_CLASS_RGTC1_RED = 0x82D0
    GL_VIEW_CLASS_RGTC2_RG = 0x82D1
    GL_VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC
    GL_VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD
    GL_VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE
    GL_VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF
    GL_VIEW_COMPATIBILITY_CLASS = 0x82B6
    GL_WAIT_FAILED = 0x911D
    GL_WEIGHT_ARRAY_BUFFER_BINDING = 0x889E
    GL_WRITE_ONLY = 0x88B9
    GL_XOR = 0x1506
    GL_ZERO = 0
    GL_ZERO_TO_ONE = 0x935F
    GL_ZOOM_X = 0x0D16
    GL_ZOOM_Y = 0x0D17

end
