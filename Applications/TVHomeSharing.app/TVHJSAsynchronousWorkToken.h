/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVHomeSharing/TVHJSAsynchronousWorkToken.h>

@protocol TVHJSAsynchronousWorkToken <NSObject,JSExport>
@required
-(void)cancel;

@end


@class NSOperation, NSString;

@interface TVHJSAsynchronousWorkToken : IKJSObject <TVHJSAsynchronousWorkToken> {

	NSOperation* _operation;

}

@property (nonatomic,retain) NSOperation * operation;               //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)initWithOperation:(id)arg1 appContext:(id)arg2 ;
@end

