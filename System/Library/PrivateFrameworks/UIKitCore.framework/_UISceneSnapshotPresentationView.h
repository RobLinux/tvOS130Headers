/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISceneSnapshotPresentation.h>

@class FBSceneSnapshot, NSString;

@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation> {

	FBSceneSnapshot* _snapshot;

}

@property (nonatomic,retain) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(FBSceneSnapshot *)sceneSnapshot;
-(void)setSceneSnapshot:(FBSceneSnapshot *)arg1 ;
@end

