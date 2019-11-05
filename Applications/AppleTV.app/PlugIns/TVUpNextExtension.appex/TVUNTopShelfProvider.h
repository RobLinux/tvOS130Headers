/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:48:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/AppleTV.app/PlugIns/TVUpNextExtension.appex/TVUpNextExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVTopShelfContentProvider.h>
#import <TVUpNextExtension/TVTopShelfMetricsReportingDelegate.h>
#import <TVUpNextExtension/TVTopShelfCustomActionPerformingDelegate.h>

@protocol TVTopShelfContent;
@class NSObject, NSString;

@interface TVUNTopShelfProvider : TVTopShelfContentProvider <TVTopShelfMetricsReportingDelegate, TVTopShelfCustomActionPerformingDelegate> {

	NSObject*<TVTopShelfContent> _lastKnownContent;

}

@property (nonatomic,retain) NSObject*<TVTopShelfContent> lastKnownContent;              //@synthesize lastKnownContent=_lastKnownContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_singleton;
-(id)init;
-(id)_init;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 ;
-(void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)loadTopShelfContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLastKnownContent:(NSObject*<TVTopShelfContent>)arg1 ;
-(void)_fetchFeaturedContentItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchUpNextItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<TVTopShelfContent>)lastKnownContent;
@end
