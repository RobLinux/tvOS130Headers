/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCContainer.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {

	NSMutableDictionary* mPlugs;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned long long countOfPlugs; 
@property (readonly) NSArray * zOrderedPlugs; 
@property (assign) CGColorRef backgroundColor; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)plugForID:(id)arg1 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(void)demolish;
-(void)removePlug:(id)arg1 ;
-(NSArray *)zOrderedPlugs;
-(NSSet *)plugs;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned long long)countOfPlugs;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removeAllPlugs;
-(id)setPlugProxyForPlug:(id)arg1 ;
@end

