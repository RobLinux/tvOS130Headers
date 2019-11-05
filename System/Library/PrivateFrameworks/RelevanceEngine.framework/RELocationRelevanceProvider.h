/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class CLLocation, NSString;

@interface RELocationRelevanceProvider : RERelevanceProvider {

	unsigned long long _type;
	CLLocation* _location;
	double _radius;
	double _accuracy;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(CLLocation *)location;
-(double)radius;
-(double)accuracy;
-(id)dictionaryEncoding;
-(id)initWithLocationType:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 ;
-(id)providerWithBundleIdentifier:(id)arg1 ;
@end

