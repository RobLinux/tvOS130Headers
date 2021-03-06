/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CRKCardPresentationConfiguration;


@protocol CRKCardPresenting <NSObject>
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration; 
@property (nonatomic,readonly) id<CRCard> card; 
@required
-(CRKCardPresentationConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;
-(id<CRCard>)card;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

