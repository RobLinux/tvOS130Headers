/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject {

	BOOL _hasAutomaticMinimumSize;
	BOOL _hasAutomaticMaximumSize;
	UIWindowScene* _scene;
	CGSize _minimumSize;
	CGSize _maximumSize;

}

@property (assign,nonatomic) CGSize minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;              //@synthesize maximumSize=_maximumSize - In the implementation block
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)_initWithScene:(id)arg1 ;
@end

