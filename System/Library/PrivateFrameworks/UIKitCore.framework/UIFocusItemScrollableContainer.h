/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFocusItemScrollableContainer <UIFocusItemContainer>
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize visibleSize; 
@required
-(CGSize)contentSize;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1;
-(CGSize)visibleSize;

@end
