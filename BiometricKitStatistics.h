/*
* This header is generated by classdump-dyld 0.2
* on Friday, January 3, 2014 at 2:16:19 AM Eastern European Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BiometricKit/BiometricKit-Structs.h>
@interface BiometricKitStatistics : NSObject {

	bool _fingerOn;
	bool _enrolling;
	bool _badImagePerFingerDown;
	unsigned long long _enrollmentStarTime;
	unsigned _touchesPerEnroll;
	unsigned _badImagesPerEnroll;
	unsigned _rejectedImagesPerEnroll;
	unsigned _primaryClusterAdditions;
	unsigned _primaryClusterFailedAdditions;
	unsigned _otherClustersAdditions;
	unsigned _joinEvents;
	double _area;
	double _primaryClusterArea;

}
+(id)statistics;
-(void)statusMessage:(unsigned)arg1 ;
-(id)init;
-(void)initEnrollmentValues;
-(void)enroll:(int)arg1 ;
-(void)enrollResult:(id)arg1 componentSet:(SCD_Struct_Bi0*)arg2 ;
-(void)enrollProgress:(id)arg1 ;
@end

