/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducer.h>

@class MPDocument;

@interface OpusMarimbaProducer : OKProducer {

	MPDocument* _marimbaDocument;
	unsigned long long _currentFeederIndex;

}
+(id)_mediaPropertiesForMediaItem:(id)arg1 ;
+(id)_transitionSettingsForTransition:(id)arg1 ;
+(id)_mediaAttributesForKey:(id)arg1 withAttributes:(id)arg2 ;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)_updateSynopsisGuideline;
-(void)_initCouchPotatoSettings;
-(BOOL)_authorBootstrap:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorImport:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorCluster:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorProduce:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorFinish:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_initTemplates;
-(id)_subtitleDictionaryForGuidelines;
-(id)_durationDictionaryForGuidelines;
-(void)_initNavigatorSettingsForLiveAuthoring:(BOOL)arg1 ;
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
@end
