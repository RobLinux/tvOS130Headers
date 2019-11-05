/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSOperationQueue, NSSet;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@optional
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)presentedItemDidChange;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(NSURL *)primaryPresentedItemURL;
-(NSSet *)observedPresentedItemUbiquityAttributes;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

