/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation {

	NSArray* _smartCamprints;
	NSString* _smartCamprintVersion;

}

@property (nonatomic,copy) NSArray * smartCamprints;                              //@synthesize smartCamprints=_smartCamprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * smartCamprintVersion;              //@synthesize smartCamprintVersion=_smartCamprintVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)smartCamprintCurrentVersion;
+(id)observationWithSmartCamprints:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2 ;
-(NSArray *)smartCamprints;
-(void)setSmartCamprints:(NSArray *)arg1 ;
-(NSString *)smartCamprintVersion;
@end

