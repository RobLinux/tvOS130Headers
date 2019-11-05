/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/NSCoding.h>

@class NSString, UIView;

@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <NSCoding> {

	NSString* _title;
	UIView* _headerFooterView;
	double _height;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * headerFooterView;              //@synthesize headerFooterView=_headerFooterView - In the implementation block
@property (nonatomic,readonly) double height;                          //@synthesize height=_height - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(double)height;
-(id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3 ;
-(UIView *)headerFooterView;
@end

