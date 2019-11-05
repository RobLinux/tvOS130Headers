/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVDateRangeMetadataGroupInternal* _priv;

}

@property (nonatomic,readonly) NSDate * discoveryTimestamp; 
@property (nonatomic,readonly) NSDate * modificationTimestamp; 
@property (getter=_dateRangeMetadataGroupInternal,nonatomic,readonly) AVDateRangeMetadataGroupInternal * dateRangeMetadataGroupInternal; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)_figMetadataArrayForMetadataItems:(id)arg1 ;
+(id)_metadataItemsForFigMetadataArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithPropertyList:(id)arg1 ;
-(id)propertyList;
-(NSArray *)items;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)uniqueID;
-(NSDate *)discoveryTimestamp;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
-(id)classifyingLabel;
-(NSDate *)modificationTimestamp;
-(id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_taggedRangeMetadataDictionary;
-(void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1 ;
-(id)_dateRangeMetadataGroupInternal;
@end

