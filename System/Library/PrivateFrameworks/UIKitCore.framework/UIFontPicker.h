/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFontDescriptor;


@protocol UIFontPicker <NSObject>
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor; 
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate; 
@required
-(id<UIFontPickerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setSelectedFontDescriptor:(id)arg1;
-(UIFontDescriptor *)selectedFontDescriptor;

@end

