/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXInboxModelTitleProvider.h>

@class NSString;

@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workQueue;
+(void)preloadResources;
+(id)defaultTitleAttributes;
+(id)emphasizedTitleAttributes;
+(id)supportingTextAttributes;
+(id)defaultSubtitleAttributes;
-(void)requestTitleAndSubtitleForModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)titleForModel:(id)arg1 ;
-(id)subtitleForModel:(id)arg1 ;
-(id)_titleForCommentWithSectionInfo:(id)arg1 ;
-(id)_titleForLikeWithSectionInfo:(id)arg1 ;
-(id)_titleForCoalescedWithSectionInfo:(id)arg1 ;
-(id)_titleForInvitationResponseWithSectionInfo:(id)arg1 accepted:(BOOL)arg2 ;
@end

