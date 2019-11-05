/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSString;

@interface UITableViewCountView : UILabel {

	NSString* _countString;
	int _count;

}
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3 ;
-(void)setCountString:(id)arg1 withCount:(long long)arg2 ;
@end

