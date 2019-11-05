/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducer.h>

@class NSMutableArray, OKAutoLayout;

@interface OpusMagazineProducer : OKProducer {

	long long _randomSeed;
	NSMutableArray* _synopsisGroups;
	double _audioPlaylistDuration;
	NSMutableArray* _pageDurations;
	long long _pageDurationsIndex;
	double _transitionDuration;
	OKAutoLayout* _autoLayoutEngine;

}
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)_addPageWithPageInfo:(id)arg1 primaryResolutionKey:(id)arg2 progressBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)_initNavigatorSettings;
-(void)_initCouchPotatoSettings;
-(id)_setupResolutions:(id)arg1 ;
-(id)_allLayoutsFromTileEngine:(id)arg1 ;
-(void)_addAnimationsToLayout:(id)arg1 ;
-(void)_initDurationsForPageInfos:(id)arg1 ;
-(void)_initTemplatesAndScript:(id)arg1 ;
-(id)_addPageTemplateToPresentation:(id)arg1 templateName:(id)arg2 withSettings:(id)arg3 zOrder:(id)arg4 ;
-(BOOL)_authorBootstrap:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_configPanoramaSettings:(id)arg1 panDuration:(double)arg2 ;
-(id)_resolveThumbnailPageWidgetForWidget:(id)arg1 ;
-(BOOL)_authorImport:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorCluster:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorProduce:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorFinish:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_configPageWidgetsSettings:(id)arg1 mediaItemMediaAttributes:(id)arg2 textItems:(id)arg3 pageItems:(id)arg4 pageInfo:(id)arg5 properties:(id)arg6 progressBlock:(/*^block*/id)arg7 error:(id*)arg8 ;
-(id)init;
-(void)dealloc;
-(BOOL)supportsLiveAuthoring;
-(BOOL)author:(BOOL)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned long long)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(BOOL)resetLiveAuthoring;
-(void)didPanMediaForWidget:(id)arg1 toState:(id)arg2 ;
-(void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
-(float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2 ;
@end

