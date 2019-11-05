/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardServices/CRSResponse.h>

@protocol CRCard;
@class CRSCardRequest;

@interface CRSCardResponse : CRSResponse {

	CRSCardRequest* _request;
	id<CRCard> _card;

}

@property (nonatomic,retain) CRSCardRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<CRCard> card;                       //@synthesize card=_card - In the implementation block
-(CRSCardRequest *)request;
-(void)setRequest:(CRSCardRequest *)arg1 ;
-(void)setCard:(id<CRCard>)arg1 ;
-(id<CRCard>)card;
@end
