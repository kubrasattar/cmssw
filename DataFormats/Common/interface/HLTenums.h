#ifndef DataFormats_Common_HLTenums_h
#define DataFormats_Common_HLTenums_h

/** \brief HLT enums
 *
 *  Definition of common HLT enums
 *
 *  \author Martin Grunewald
 *
 */

namespace edm
{
  namespace hlt
    {

      /// status of a trigger path
      enum HLTState {Ready=0,     ///< not [yet] run
		     Pass =1,     ///< accept
		     Fail =2,     ///< reject
		     Exception=3  ///< error
      };

    }
}

#endif // DataFormats_Common_HLTenums_h
