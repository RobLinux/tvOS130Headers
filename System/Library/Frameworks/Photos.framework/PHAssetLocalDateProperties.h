/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet {

	NSNumber* _inferredTimeZoneOffset;

}

@property (nonatomic,readonly) NSNumber * inferredTimeZoneOffset;              //@synthesize inferredTimeZoneOffset=_inferredTimeZoneOffset - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSNumber *)inferredTimeZoneOffset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

