/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <RelevanceEngine/RERemoteTrainingClientListenerDelegate.h>
#import <RelevanceEngine/RETrainingManagerProperties.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, RETrainingScheduler, RELiveElementCoordinator, REMLModelManager, NSMutableSet, NSObject, RERemoteTrainingClientListener, RETrainingContext;

@interface RETrainingManager : RERelevanceEngineSubsystem <RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties> {

	RELiveElementCoordinator* _coordinator;
	REMLModelManager* _modelManager;
	RETrainingScheduler* _trainingScheduler;
	NSMutableSet* _trainingContexts;
	NSObject*<OS_dispatch_queue> _queue;
	RERemoteTrainingClientListener* _remoteTrainingListener;
	NSMutableArray* _trainingFeatureMaps;
	NSMutableArray* _trainingContents;
	NSMutableArray* _trainingEvents;
	NSMutableArray* _interactionTypes;
	RETrainingContext* _currentTrainingContext;

}

@property (retain) RETrainingContext * currentTrainingContext;                       //@synthesize currentTrainingContext=_currentTrainingContext - In the implementation block
@property (nonatomic,readonly) NSMutableArray * trainingEvents; 
@property (nonatomic,readonly) RETrainingScheduler * trainingScheduler; 
-(void)dealloc;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1 ;
-(void)remoteTrainingClientListenerDidConnectContext:(id)arg1 ;
-(void)_performTrainingForPredictionElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4 ;
-(void)makeContextCurrent:(id)arg1 ;
-(RETrainingContext *)currentTrainingContext;
-(void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4 ;
-(void)performTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4 ;
-(void)_queue_trainElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 featureMap:(id)arg3 isPositiveEvent:(BOOL)arg4 interaction:(id)arg5 context:(id)arg6 ;
-(void)flushTraining;
-(void)_performTraining:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentTrainingContext:(RETrainingContext *)arg1 ;
-(void)addTrainingContext:(id)arg1 ;
-(void)removeTrainingContext:(id)arg1 ;
-(NSMutableArray *)trainingEvents;
-(RETrainingScheduler *)trainingScheduler;
-(void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)performTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)manuallyPerformTrainingWithCompletion:(/*^block*/id)arg1 ;
@end

