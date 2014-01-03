/*
* This header is generated by classdump-dyld 0.2
* on Friday, January 3, 2014 at 2:16:20 AM Eastern European Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

typedef struct {
	int field1;
	int field2;
	/*function pointer*/ void* field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	/*function pointer*/ void* field9;
	short field10;
	short field11;
	int field12;
	bool field13;
} SCD_Struct_Bi0;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int count;
	int capa;
	/*function pointer*/ void* items;
	int unusedImageCount;
	int componentCount;
	int componentCapa;
	int bestComponentIndex;
	int bestMapiComponentIndex;
	/*function pointer*/ void* components;
	short mapiNodeAddedIndex;
	short mapiNodeRemovedIndex;
	int updateCount;
	bool structureIsInconsistent;
} SCD_Struct_Bi4;

typedef struct {
	NSData* imageData;
	unsigned width;
	unsigned height;
} SCD_Struct_Bi5;

typedef struct {
	SCD_Struct_Bi5 nodes[25];
} SCD_Struct_Bi6;

typedef struct _NSZone* NSZoneRef;

typedef const struct __CFString* CFStringRef;

typedef struct {
	id field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_Bi9;

typedef struct {
	short field1;
	short field2;
	short field3;
} SCD_Struct_Bi10;

typedef struct {
	SCD_Struct_Bi10 field1;
	short field2;
	short field3;
} SCD_Struct_Bi11;

typedef struct {
	short field1;
	short field2;
	short field3;
	short field4;
	short field5;
	short field6;
	SCD_Struct_Bi11 field7[25];
	short field8;
	short field9;
	short field10;
	short field11;
	short field12;
	short field13;
} SCD_Struct_Bi12;

typedef struct {
	short field1;
	short field2;
	short field3;
	SCD_Struct_Bi10 field4;
	SCD_Struct_Bi12 field5;
	int field6;
	int field7;
} SCD_Struct_Bi13;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_Bi14;

typedef struct {
	SCD_Struct_Bi14 field1;
	short field2;
	short field3;
	short field4;
	short field5;
} SCD_Struct_Bi15;

