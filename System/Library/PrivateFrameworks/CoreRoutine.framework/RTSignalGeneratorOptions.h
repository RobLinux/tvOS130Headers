/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/NSCopying.h>
#import <CoreRoutine/NSSecureCoding.h>

@class RTLocation, NSArray;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _startLocation;
	RTLocation* _endLocation;
	NSArray* _expectedVisits;

}

@property (readonly) RTLocation * startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) RTLocation * endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) NSArray * expectedVisits;                //@synthesize expectedVisits=_expectedVisits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)visitsDescriptionDataAtPath:(id)arg1 ;
+(id)getVisitsFromVisitsDescriptionData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RTLocation *)startLocation;
-(RTLocation *)endLocation;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3 ;
-(id)initWithVisitsDescriptionPListPath:(id)arg1 ;
-(NSArray *)expectedVisits;
@end

