/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUIViewStyle.h>

@interface SiriTVUIRowStyle : SiriTVUIViewStyle {

	BOOL _showTopBorder;
	BOOL _hasShowTopBorder;

}

@property (assign,nonatomic) BOOL showTopBorder;                   //@synthesize showTopBorder=_showTopBorder - In the implementation block
@property (nonatomic,readonly) BOOL hasShowTopBorder;              //@synthesize hasShowTopBorder=_hasShowTopBorder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)showTopBorder;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(BOOL)hasShowTopBorder;
-(void)copyStylesToStyle:(id)arg1 ;
-(BOOL)isEmptyStyle;
-(BOOL)isEqualToRowStyle:(id)arg1 ;
@end

