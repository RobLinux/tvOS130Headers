/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@interface IMURLRequestEncoder : AMSURLRequestEncoder {

	BOOL _personalizeRequests;

}

@property (assign,nonatomic) BOOL personalizeRequests;              //@synthesize personalizeRequests=_personalizeRequests - In the implementation block
-(id)initWithBag:(id)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(BOOL)personalizeRequests;
-(void)prepareRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPersonalizeRequests:(BOOL)arg1 ;
@end

