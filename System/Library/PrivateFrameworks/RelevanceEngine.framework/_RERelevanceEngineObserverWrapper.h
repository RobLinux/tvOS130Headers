/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceEngineObserver.h>

@protocol RERelevanceEngineObserver;
@class NSString;

@interface _RERelevanceEngineObserverWrapper : NSObject <RERelevanceEngineObserver> {

	SCD_Struct_RE1 _observerCallbacks;
	id<RERelevanceEngineObserver> _observer;

}

@property (nonatomic,__weak,readonly) id<RERelevanceEngineObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<RERelevanceEngineObserver>)observer;
-(id)initWithObserver:(id)arg1 ;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 ;
-(void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3 ;
-(BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2 ;
-(void)relevanceEngine:(id)arg1 didUpdateRelevanceForElement:(id)arg2 ;
-(void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1 ;
-(void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1 ;
@end

