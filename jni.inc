; Java Native Interface
; NASM include file
; Copyright (C) 2002 Matthijs Laan <matthijsln@xs4all.nl>

; jboolean constants

JNI_FALSE       equ     0
JNI_TRUE        equ     1

; possible return values for JNI functions

JNI_OK          equ      0              ; success
JNI_ERR         equ     -1              ; unknown error
JNI_EDETACHED   equ     -2              ; thread detached from the VM
JNI_EVERSION    equ     -3              ; JNI version error
JNI_ENOMEM      equ     -4              ; not enough memory
JNI_EEXIST      equ     -5              ; VM already created
JNI_EINVAL      equ     -6              ; invalid arguments

; used in ReleaseScalarArrayElements

JNI_COMMIT      equ     1
JNI_ABORT       equ     2

; used in RegisterNatives to describe native method name, signature,
; and function pointer

struc JNINativeMethod
        .name           resd 1
        .signature      resd 1
        .fnPtr          resd 1
endstruc

; JNI Native Method Interface

struc JNIEnv
        .reserved0                      resd 1
        .reserved1                      resd 1
        .reserved2                      resd 1
        .reserved3                      resd 1
        .GetVersion                     resd 1
        .DefineClass                    resd 1
        .FindClass                      resd 1
        .FromReflectedMethod            resd 1
        .FromReflectedField             resd 1
        .ToReflectedMethod              resd 1
        .GetSuperclass                  resd 1
        .IsAssignableFrom               resd 1
        .ToReflectedField               resd 1
        .Throw                          resd 1
        .ThrowNew                       resd 1
        .ExceptionOccurred              resd 1
        .ExceptionDescribe              resd 1
        .ExceptionClear                 resd 1
        .FatalError                     resd 1
        .PushLocalFrame                 resd 1
        .PopLocalFrame                  resd 1
        .NewGlobalRef                   resd 1
        .DeleteGlobalRef                resd 1
        .DeleteLocalRef                 resd 1
        .IsSameObject                   resd 1
        .NewLocalRef                    resd 1
        .EnsureLocalCapacity            resd 1
        .AllocObject                    resd 1
        .NewObject                      resd 1
        .NewObjectV                     resd 1
        .NewObjectA                     resd 1
        .GetObjectClass                 resd 1
        .IsInstanceOf                   resd 1
        .GetMethodID                    resd 1
        .CallObjectMethod               resd 1
        .CallObjectMethodV              resd 1
        .CallObjectMethodA              resd 1
        .CallBooleanMethod              resd 1
        .CallBooleanMethodV             resd 1
        .CallBooleanMethodA             resd 1
        .CallByteMethod                 resd 1
        .CallByteMethodV                resd 1
        .CallByteMethodA                resd 1
        .CallCharMethod                 resd 1
        .CallCharMethodV                resd 1
        .CallCharMethodA                resd 1
        .CallShortMethod                resd 1
        .CallShortMethodV               resd 1
        .CallShortMethodA               resd 1
        .CallIntMethod                  resd 1
        .CallIntMethodV                 resd 1
        .CallIntMethodA                 resd 1
        .CallLongMethod                 resd 1
        .CallLongMethodV                resd 1
        .CallLongMethodA                resd 1
        .CallFloatMethod                resd 1
        .CallFloatMethodV               resd 1
        .CallFloatMethodA               resd 1
        .CallDoubleMethod               resd 1
        .CallDoubleMethodV              resd 1
        .CallDoubleMethodA              resd 1
        .CallVoidMethod                 resd 1
        .CallVoidMethodV                resd 1
        .CallVoidMethodA                resd 1
        .CallNonvirtualObjectMethod     resd 1
        .CallNonvirtualObjectMethodV    resd 1
        .CallNonvirtualObjectMethodA    resd 1
        .CallNonvirtualBooleanMethod    resd 1
        .CallNonvirtualBooleanMethodV   resd 1
        .CallNonvirtualBooleanMethodA   resd 1
        .CallNonvirtualByteMethod       resd 1
        .CallNonvirtualByteMethodV      resd 1
        .CallNonvirtualByteMethodA      resd 1
        .CallNonvirtualCharMethod       resd 1
        .CallNonvirtualCharMethodV      resd 1
        .CallNonvirtualCharMethodA      resd 1
        .CallNonvirtualShortMethod      resd 1
        .CallNonvirtualShortMethodV     resd 1
        .CallNonvirtualShortMethodA     resd 1
        .CallNonvirtualIntMethod        resd 1
        .CallNonvirtualIntMethodV       resd 1
        .CallNonvirtualIntMethodA       resd 1
        .CallNonvirtualLongMethod       resd 1
        .CallNonvirtualLongMethodV      resd 1
        .CallNonvirtualLongMethodA      resd 1
        .CallNonvirtualFloatMethod      resd 1
        .CallNonvirtualFloatMethodV     resd 1
        .CallNonvirtualFloatMethodA     resd 1
        .CallNonvirtualDoubleMethod     resd 1
        .CallNonvirtualDoubleMethodV    resd 1
        .CallNonvirtualDoubleMethodA    resd 1
        .CallNonvirtualVoidMethod       resd 1
        .CallNonvirtualVoidMethodV      resd 1
        .CallNonvirtualVoidMethodA      resd 1
        .GetFieldID                     resd 1
        .GetObjectField                 resd 1
        .GetBooleanField                resd 1
        .GetByteField                   resd 1
        .GetCharField                   resd 1
        .GetShortField                  resd 1
        .GetIntField                    resd 1
        .GetLongField                   resd 1
        .GetFloatField                  resd 1
        .GetDoubleField                 resd 1
        .SetObjectField                 resd 1
        .SetBooleanField                resd 1
        .SetByteField                   resd 1
        .SetCharField                   resd 1
        .SetShortField                  resd 1
        .SetIntField                    resd 1
        .SetLongField                   resd 1
        .SetFloatField                  resd 1
        .SetDoubleField                 resd 1
        .GetStaticMethodID              resd 1
        .CallStaticObjectMethod         resd 1
        .CallStaticObjectMethodV        resd 1
        .CallStaticObjectMethodA        resd 1
        .CallStaticBooleanMethod        resd 1
        .CallStaticBooleanMethodV       resd 1
        .CallStaticBooleanMethodA       resd 1
        .CallStaticByteMethod           resd 1
        .CallStaticByteMethodV          resd 1
        .CallStaticByteMethodA          resd 1
        .CallStaticCharMethod           resd 1
        .CallStaticCharMethodV          resd 1
        .CallStaticCharMethodA          resd 1
        .CallStaticShortMethod          resd 1
        .CallStaticShortMethodV         resd 1
        .CallStaticShortMethodA         resd 1
        .CallStaticIntMethod            resd 1
        .CallStaticIntMethodV           resd 1
        .CallStaticIntMethodA           resd 1
        .CallStaticLongMethod           resd 1
        .CallStaticLongMethodV          resd 1
        .CallStaticLongMethodA          resd 1
        .CallStaticFloatMethod          resd 1
        .CallStaticFloatMethodV         resd 1
        .CallStaticFloatMethodA         resd 1
        .CallStaticDoubleMethod         resd 1
        .CallStaticDoubleMethodV        resd 1
        .CallStaticDoubleMethodA        resd 1
        .CallStaticVoidMethod           resd 1
        .CallStaticVoidMethodV          resd 1
        .CallStaticVoidMethodA          resd 1
        .GetStaticFieldID               resd 1
        .GetStaticObjectField           resd 1
        .GetStaticBooleanField          resd 1
        .GetStaticByteField             resd 1
        .GetStaticCharField             resd 1
        .GetStaticShortField            resd 1
        .GetStaticIntField              resd 1
        .GetStaticLongField             resd 1
        .GetStaticFloatField            resd 1
        .GetStaticDoubleField           resd 1
        .SetStaticObjectField           resd 1
        .SetStaticBooleanField          resd 1
        .SetStaticByteField             resd 1
        .SetStaticCharField             resd 1
        .SetStaticShortField            resd 1
        .SetStaticIntField              resd 1
        .SetStaticLongField             resd 1
        .SetStaticFloatField            resd 1
        .SetStaticDoubleField           resd 1
        .NewString                      resd 1
        .GetStringLength                resd 1
        .GetStringChars                 resd 1
        .ReleaseStringChars             resd 1
        .NewStringUTF                   resd 1
        .GetStringUTFLength             resd 1
        .GetStringUTFChars              resd 1
        .ReleaseStringUTFChars          resd 1
        .GetArrayLength                 resd 1
        .NewObjectArray                 resd 1
        .GetObjectArrayElement          resd 1
        .SetObjectArrayElement          resd 1
        .NewBooleanArray                resd 1
        .NewByteArray                   resd 1
        .NewCharArray                   resd 1
        .NewShortArray                  resd 1
        .NewIntArray                    resd 1
        .NewLongArray                   resd 1
        .NewFloatArray                  resd 1
        .NewDoubleArray                 resd 1
        .GetBooleanArrayElements        resd 1
        .GetByteArrayElements           resd 1
        .GetCharArrayElements           resd 1
        .GetShortArrayElements          resd 1
        .GetIntArrayElements            resd 1
        .GetLongArrayElements           resd 1
        .GetFloatArrayElements          resd 1
        .GetDoubleArrayElements         resd 1
        .ReleaseBooleanArrayElements    resd 1
        .ReleaseByteArrayElements       resd 1
        .ReleaseCharArrayElements       resd 1
        .ReleaseShortArrayElements      resd 1
        .ReleaseIntArrayElements        resd 1
        .ReleaseLongArrayElements       resd 1
        .ReleaseFloatArrayElements      resd 1
        .ReleaseDoubleArrayElements     resd 1
        .GetBooleanArrayRegion          resd 1
        .GetByteArrayRegion             resd 1
        .GetCharArrayRegion             resd 1
        .GetShortArrayRegion            resd 1
        .GetIntArrayRegion              resd 1
        .GetLongArrayRegion             resd 1
        .GetFloatArrayRegion            resd 1
        .GetDoubleArrayRegion           resd 1
        .SetBooleanArrayRegion          resd 1
        .SetByteArrayRegion             resd 1
        .SetCharArrayRegion             resd 1
        .SetShortArrayRegion            resd 1
        .SetIntArrayRegion              resd 1
        .SetLongArrayRegion             resd 1
        .SetFloatArrayRegion            resd 1
        .SetDoubleArrayRegion           resd 1
        .RegisterNatives                resd 1
        .UnregisterNatives              resd 1
        .MonitorEnter                   resd 1
        .MonitorExit                    resd 1
        .GetJavaVM                      resd 1
        .GetStringRegion                resd 1
        .GetStringUTFRegion             resd 1
        .GetPrimitiveArrayCritical      resd 1
        .ReleasePrimitiveArrayCritical  resd 1
        .GetStringCritical              resd 1
        .ReleaseStringCritical          resd 1
        .NewWeakGlobalRef               resd 1
        .DeleteWeakGlobalRef            resd 1
        .ExceptionCheck                 resd 1
endstruc