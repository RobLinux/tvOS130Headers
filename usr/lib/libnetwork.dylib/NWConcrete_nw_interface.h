/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:28:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/OS_nw_interface.h>

@class NSString;

@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {

	unsigned index;
	nw_interface_details details;
	unsigned delegate_index;
	unsigned generation;
	int type;
	int subtype;
	char name[25];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

