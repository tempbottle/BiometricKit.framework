/*
* This header is generated by classdump-dyld 0.2
* on Friday, January 3, 2014 at 2:16:19 AM Eastern European Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTopology:(id)arg1 ;
-(id)topology;
-(id)details;
-(void)setDetails:(id)arg1 ;
@end
