/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRAsyncCardReceiptFeedback <CRFeedback>
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,retain) id<CRCard> receivedCard; 
@required
-(id<CRCard>)baseCard;
-(void)setBaseCard:(id)arg1;
-(id<CRCard>)requestedCard;
-(void)setRequestedCard:(id)arg1;
-(id<CRCard>)receivedCard;
-(void)setReceivedCard:(id)arg1;

@end

