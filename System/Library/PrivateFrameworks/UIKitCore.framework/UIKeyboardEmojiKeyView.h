/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryUpdate.h>

@protocol UIKeyboardEmojiCategoryUpdateDelegate;
@class UIKeyboardEmojiKeyDisplayController, NSString;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate> {

	UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager;

}

@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)arg1 ;
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
@end

