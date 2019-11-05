/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCContainer.h>

@class NSMutableSet, NSArray, NSString, NSDictionary, NSSet;

@interface MCContainerSerializer : MCContainer {

	NSMutableSet* mPlugs;
	NSArray* mCachedOrderedPlugs;
	double mCachedDuration;
	NSString* _initialTransitionID;
	double _initialTransitionDuration;
	NSDictionary* _initialTransitionAttributes;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned long long countOfPlugs; 
@property (readonly) NSArray * orderedPlugs; 
@property (readonly) double duration; 
@property (copy) NSString * initialTransitionID;                             //@synthesize initialTransitionID=_initialTransitionID - In the implementation block
@property (assign,nonatomic) double initialTransitionDuration;               //@synthesize initialTransitionDuration=_initialTransitionDuration - In the implementation block
@property (copy) NSDictionary * initialTransitionAttributes;                 //@synthesize initialTransitionAttributes=_initialTransitionAttributes - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(void)demolish;
-(void)setInitialTransitionID:(NSString *)arg1 ;
-(void)setInitialTransitionDuration:(double)arg1 ;
-(void)setInitialTransitionAttributes:(NSDictionary *)arg1 ;
-(id)insertPlugsForContainers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)orderedPlugs;
-(void)removePlugsAtIndices:(id)arg1 ;
-(void)movePlugsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)addPlugsForContainers:(id)arg1 ;
-(NSSet *)plugs;
-(NSString *)initialTransitionID;
-(NSDictionary *)initialTransitionAttributes;
-(double)initialTransitionDuration;
-(id)imprint;
-(id)plugAtIndex:(unsigned long long)arg1 ;
-(double)timeInForPlug:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned long long)countOfPlugs;
-(void)removeAllPlugs;
-(id)addPlugForContainer:(id)arg1 ;
-(id)insertPlugForContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

