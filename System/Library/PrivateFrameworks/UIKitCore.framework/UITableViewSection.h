/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/NSCoding.h>

@class NSString, UIView, NSArray;

@interface UITableViewSection : NSObject <NSCoding> {

	NSString* _headerTitle;
	UIView* _headerView;
	NSString* _footerTitle;
	UIView* _footerView;
	NSArray* _rows;

}

@property (nonatomic,copy) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) UIView * headerView;               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;              //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,retain) UIView * footerView;               //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSArray * rows;                      //@synthesize rows=_rows - In the implementation block
+(id)sectionWithRows:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSString *)headerTitle;
-(void)setFooterView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setFooterTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
@end

