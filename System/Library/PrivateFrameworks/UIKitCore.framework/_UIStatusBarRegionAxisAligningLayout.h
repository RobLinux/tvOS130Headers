/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	long long _alignment;

}

@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverflowItems; 
+(id)aligningLayoutWithAlignment:(long long)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)canOverflowItems;
@end

