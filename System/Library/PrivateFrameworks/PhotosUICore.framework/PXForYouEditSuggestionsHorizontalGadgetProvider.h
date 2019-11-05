/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>
#import <PhotosUICore/PXForYouRankable.h>

@class NSDate;

@interface PXForYouEditSuggestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable> {

	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(long long)defaultPriority;
-(BOOL)supportsDynamicRanking;
-(void)resetPriorityDate;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2 ;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
@end

