/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/CAMLParserDelegate.h>
#import <AVKit/CAStateControllerDelegate.h>

@class NSString, CAStateController, CALayer;

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate> {

	NSString* _state;
	NSString* _packageName;
	CAStateController* _stateController;
	long long _layoutDirection;
	CALayer* _rootLayer;
	CGSize _targetSize;
	CGSize _unscaledSize;

}

@property (nonatomic,readonly) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (assign,nonatomic) CGSize unscaledSize;                                //@synthesize unscaledSize=_unscaledSize - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                          //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                                //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                  //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) NSString * packageName;                           //@synthesize packageName=_packageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
+(void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)state;
-(void)_setState:(id)arg1 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(CALayer *)rootLayer;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2 ;
-(void)setState:(id)arg1 color:(CGColorRef)arg2 ;
-(void)removeCompositingFiltersWithName:(id)arg1 ;
-(id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2 ;
-(void)_recursivelySetFillColor:(CGColorRef)arg1 rootLayer:(id)arg2 ;
-(void)_recursivelyRemoveCompositingFiltersWithName:(id)arg1 rootLayer:(id)arg2 ;
-(void)transitionToStateWithName:(id)arg1 ;
-(void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2 ;
-(id)availableStates;
-(id)availableStatesOnLayer:(id)arg1 ;
-(id)sublayerWithName:(id)arg1 ;
-(void)_loadRootLayerIfNeeded;
-(CGSize)unscaledSize;
-(void)setUnscaledSize:(CGSize)arg1 ;
-(NSString *)packageName;
-(CAStateController *)stateController;
@end

