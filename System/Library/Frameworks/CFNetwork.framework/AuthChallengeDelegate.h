/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDelegate.h>

@class NSString;

@interface AuthChallengeDelegate : NSObject <NSURLSessionTaskDelegate> {

	BOOL _didReceiveChallenge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)didReceiveChallenge;
@end

