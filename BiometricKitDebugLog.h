/*
* This header is generated by classdump-dyld 0.2
* on Friday, January 3, 2014 at 2:16:20 AM Eastern European Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BiometricKit/BiometricKit-Structs.h>
@interface BiometricKitDebugLog : NSObject
+(void)enableLogger:(bool)arg1 toPath:(id)arg2 ;
+(void)startEnrollLog;
+(void)logRemoveIdentity:(id)arg1 ;
+(id)getRadarAtachmentsForLastEnrollment;
+(id)getRadarAtachmentsForLastMatch;
+(id)getLogsForProcess:(id)arg1 ;
+(void)finishEnrollLogWithStatus:(int)arg1 withIdentity:(id)arg2 withTemplate:(id)arg3 ;
+(void)logMatchResult:(id)arg1 withTopology:(const SCD_Struct_Bi13*)arg2 withImage:(const SCD_Struct_Bi9*)arg3 withCaptureBuffer:(id)arg4 withTemplate:(id)arg5 ;
+(void)logEnrollMessage:(int)arg1 withTopology:(const SCD_Struct_Bi12*)arg2 withImage:(const SCD_Struct_Bi9*)arg3 withCaptureBuffer:(id)arg4 ;
+(void)logStatus:(int)arg1 ;
+(void)logRejectedImage:(id)arg1 ;
+(void)logMessage:(id)arg1 ;
@end

