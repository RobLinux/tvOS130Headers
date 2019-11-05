/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <Foundation/NSCopying.h>

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	CFURLComponentsRef _components;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)string;
-(id)user;
-(id)scheme;
-(id)host;
-(id)port;
-(id)password;
-(id)query;
-(id)fragment;
-(id)initWithString:(id)arg1 ;
-(id)URL;
-(void)setScheme:(id)arg1 ;
-(id)path;
-(void)setPath:(id)arg1 ;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfScheme;
-(void)setPort:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(NSRange)rangeOfPath;
-(CFURLComponentsRef)__cfComponents;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(id)percentEncodedUser;
-(void)setPercentEncodedUser:(id)arg1 ;
-(id)percentEncodedPassword;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(id)percentEncodedHost;
-(void)setPercentEncodedHost:(id)arg1 ;
-(id)percentEncodedPath;
-(void)setPercentEncodedPath:(id)arg1 ;
-(id)percentEncodedQuery;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(id)percentEncodedFragment;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfQuery;
-(NSRange)rangeOfFragment;
-(id)queryItems;
-(void)setQueryItems:(id)arg1 ;
-(id)percentEncodedQueryItems;
-(void)setPercentEncodedQueryItems:(id)arg1 ;
@end

