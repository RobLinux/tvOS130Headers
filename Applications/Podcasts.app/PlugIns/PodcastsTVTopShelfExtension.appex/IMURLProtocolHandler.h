/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@interface IMURLProtocolHandler : AMSURLProtocolHandler {

	BOOL _followsRedirects;

}

@property (assign) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(void)setFollowsRedirects:(BOOL)arg1 ;
-(BOOL)followsRedirects;
@end

