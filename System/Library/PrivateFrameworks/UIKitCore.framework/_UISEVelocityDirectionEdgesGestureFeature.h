/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {

	id<_UISEGestureFeatureSettings> _settings;
	id<_UISETouchedEdgesProvider> _provider;
	BOOL _exactMatchEdges;
	CGPoint _initialLocation;
	unsigned long long _touchedEdges;

}

@property (nonatomic,readonly) unsigned long long touchedEdges;              //@synthesize touchedEdges=_touchedEdges - In the implementation block
-(id)debugDictionary;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(unsigned long long)touchedEdges;
-(id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(BOOL)arg3 ;
@end

