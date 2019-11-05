/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXImageMonitorObserver.h>

@protocol AXImageMonitor, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSString;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {

	id<AXImageMonitor> _imageMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _loadAccessibilityCodeItemsSource;
	NSObject*<OS_dispatch_source> _dyldImageActivityCoalesceTimer;
	long long _monitoredLoadTriggeringImageCountSinceLastLoad;
	NSMutableSet* _trackedCodeItems;
	NSMutableSet* _accessibilityCodeItems;
	/*^block*/id _beginTrackingCompletion;
	NSObject*<OS_dispatch_queue> _beginTrackingCompletionQueue;
	BOOL _initialLoadHasOccurred;
	BOOL _initialLoadHasFinished;
	NSString* _currentPlatformKey;
	BOOL _shouldAutoloadAccessibilityCodeItems;
	long long _trackingMode;
	/*^block*/id _shouldLoadAccessibilityCodeItemBlock;
	/*^block*/id _didLoadAccessibilityCodeItemBlock;
	/*^block*/id _loadEventWillOccurBlock;
	/*^block*/id _loadEventDidOccurBlock;

}

@property (assign,nonatomic) long long trackingMode;                                 //@synthesize trackingMode=_trackingMode - In the implementation block
@property (nonatomic,readonly) BOOL isTrackingLoadedCodeItems; 
@property (nonatomic,readonly) BOOL isInitialLoadFinished; 
@property (assign,nonatomic) BOOL shouldAutoloadAccessibilityCodeItems;              //@synthesize shouldAutoloadAccessibilityCodeItems=_shouldAutoloadAccessibilityCodeItems - In the implementation block
@property (nonatomic,copy) id shouldLoadAccessibilityCodeItemBlock;                  //@synthesize shouldLoadAccessibilityCodeItemBlock=_shouldLoadAccessibilityCodeItemBlock - In the implementation block
@property (nonatomic,copy) id didLoadAccessibilityCodeItemBlock;                     //@synthesize didLoadAccessibilityCodeItemBlock=_didLoadAccessibilityCodeItemBlock - In the implementation block
@property (nonatomic,copy) id loadEventWillOccurBlock;                               //@synthesize loadEventWillOccurBlock=_loadEventWillOccurBlock - In the implementation block
@property (nonatomic,copy) id loadEventDidOccurBlock;                                //@synthesize loadEventDidOccurBlock=_loadEventDidOccurBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLoader;
-(id)init;
-(long long)trackingMode;
-(id)codeItemForBundle:(id)arg1 ;
-(id)initWithImageMonitor:(id)arg1 ;
-(id)_platformKeyForPlatform:(unsigned)arg1 ;
-(void)_loadAccessibilityCodeItems;
-(id)shouldLoadAccessibilityCodeItemBlock;
-(id)didLoadAccessibilityCodeItemBlock;
-(id)loadEventWillOccurBlock;
-(id)loadEventDidOccurBlock;
-(BOOL)isTrackingLoadedCodeItems;
-(void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
-(void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1 ;
-(id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)arg1 ;
-(void)_consumeBeginTrackingCompletionHandlerIfNeeded;
-(BOOL)shouldAutoloadAccessibilityCodeItems;
-(id)_accessibilityBundleMapURLs;
-(id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1 ;
-(void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
-(void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
-(id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2 path:(id)arg3 ;
-(/*^block*/id)_validLoadEventWillOccurBlock;
-(/*^block*/id)_validShouldLoadAccessibilityCodeItemBlock;
-(/*^block*/id)_validDidLoadAccessibilityCodeItemBlock;
-(/*^block*/id)_validLoadEventDidOccurBlock;
-(void)_addTrackedCodeItem:(id)arg1 ;
-(void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1 ;
-(id)loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)arg1 ;
-(void)imageMonitor:(id)arg1 didAddImage:(id)arg2 ;
-(void)iterateInitialImageListForImageMonitor:(id)arg1 ;
-(BOOL)isInitialLoadFinished;
-(void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(/*^block*/id)arg2 targetQueue:(id)arg3 ;
-(void)endTrackingLoadedCodeItemsWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(BOOL)arg1 ;
-(void)setAccessibilityCodeItemsNeedLoaded;
-(void)_cancelDyldImageActivityTimer;
-(void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTrackingMode:(long long)arg1 ;
-(void)setShouldAutoloadAccessibilityCodeItems:(BOOL)arg1 ;
-(void)setShouldLoadAccessibilityCodeItemBlock:(id)arg1 ;
-(void)setDidLoadAccessibilityCodeItemBlock:(id)arg1 ;
-(void)setLoadEventWillOccurBlock:(id)arg1 ;
-(void)setLoadEventDidOccurBlock:(id)arg1 ;
-(id)_stateDescForItem:(id)arg1 ;
-(id)recomputedCodeItemsForAllFrameworks;
-(id)recomputedCodeItemsForLoadedAccessibilityBundles;
-(id)accessibilityCodeItemDefinitions;
-(void)logLoaderState;
-(id)trackedCodeItems;
-(id)rogueAccessibilityCodeItems;
@end

