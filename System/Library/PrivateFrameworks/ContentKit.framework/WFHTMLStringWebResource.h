/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFWebResource.h>

@class NSString, NSURL;

@interface WFHTMLStringWebResource : WFWebResource {

	NSString* _htmlString;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSString * htmlString;              //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                    //@synthesize baseURL=_baseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)textEncodingName;
-(NSString *)htmlString;
-(id)loadInWKWebView:(id)arg1 ;
-(id)initWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
@end

