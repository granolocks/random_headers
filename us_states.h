#ifndef US_STATES_H
#define US_STATES_H

#define NA "na"

#include <stdbool.h>

// Source: https://en.wikipedia.org/wiki/List_of_U.S._state_and_territory_abbreviations

typedef struct {
  char *name;
  char *status;
  char *abbr;
  char *abbr_gpo;
  bool primary_state;
} US_state;

const US_state us_states[] = {
  { .name = "Alabama"                                , .status = "State"                       , .abbr = "AL" , .abbr_gpo = "Ala."    , .primary_state = true  },
  { .name = "Alaska"                                 , .status = "State"                       , .abbr = "AK" , .abbr_gpo = "Alaska"  , .primary_state = true  },
  { .name = "Arizona"                                , .status = "State"                       , .abbr = "AZ" , .abbr_gpo = "Ariz."   , .primary_state = true  },
  { .name = "Arkansas"                               , .status = "State"                       , .abbr = "AR" , .abbr_gpo = "Ark."    , .primary_state = true  },
  { .name = "California"                             , .status = "State"                       , .abbr = "CF" , .abbr_gpo = "Calif."  , .primary_state = true  },
  { .name = "Colorado"                               , .status = "State"                       , .abbr = "CL" , .abbr_gpo = "Colo."   , .primary_state = true  },
  { .name = "Connecticut"                            , .status = "State"                       , .abbr = "CT" , .abbr_gpo = "Conn."   , .primary_state = true  },
  { .name = "Delaware"                               , .status = "State"                       , .abbr = "DL" , .abbr_gpo = "Del."    , .primary_state = true  },
  { .name = "District of Columbia"                   , .status = "Federal district"            , .abbr = "DC" , .abbr_gpo = "D.C."    , .primary_state = false },
  { .name = "Florida"                                , .status = "State"                       , .abbr = "FL" , .abbr_gpo = "Fla."    , .primary_state = true  },
  { .name = "Georgia"                                , .status = "State"                       , .abbr = "GA" , .abbr_gpo = "Ga."     , .primary_state = true  },
  { .name = "Hawaii"                                 , .status = "State"                       , .abbr = "HA" , .abbr_gpo = "Hawaii"  , .primary_state = true  },
  { .name = "Idaho"                                  , .status = "State"                       , .abbr = "ID" , .abbr_gpo = "Idaho"   , .primary_state = true  },
  { .name = "Illinois"                               , .status = "State"                       , .abbr = "IL" , .abbr_gpo = "Ill."    , .primary_state = true  },
  { .name = "Indiana"                                , .status = "State"                       , .abbr = "IN" , .abbr_gpo = "Ind."    , .primary_state = true  },
  { .name = "Iowa"                                   , .status = "State"                       , .abbr = "IA" , .abbr_gpo = "Iowa"    , .primary_state = true  },
  { .name = "Kansas"                                 , .status = "State"                       , .abbr = "KA" , .abbr_gpo = "Kans."   , .primary_state = true  },
  { .name = "Kentucky"                               , .status = "State"                       , .abbr = "KY" , .abbr_gpo = "Ky."     , .primary_state = true  },
  { .name = "Louisiana"                              , .status = "State"                       , .abbr = "LA" , .abbr_gpo = "La."     , .primary_state = true  },
  { .name = "Maine"                                  , .status = "State"                       , .abbr = "ME" , .abbr_gpo = "Maine"   , .primary_state = true  },
  { .name = "Maryland"                               , .status = "State"                       , .abbr = "MD" , .abbr_gpo = "Md."     , .primary_state = true  },
  { .name = "Massachusetts"                          , .status = "State"                       , .abbr = "MS" , .abbr_gpo = "Mass."   , .primary_state = true  },
  { .name = "Michigan"                               , .status = "State"                       , .abbr = "MC" , .abbr_gpo = "Mich."   , .primary_state = true  },
  { .name = "Minnesota"                              , .status = "State"                       , .abbr = "MN" , .abbr_gpo = "Minn."   , .primary_state = true  },
  { .name = "Mississippi"                            , .status = "State"                       , .abbr = "MI" , .abbr_gpo = "Miss."   , .primary_state = true  },
  { .name = "Missouri"                               , .status = "State"                       , .abbr = "MO" , .abbr_gpo = "Mo."     , .primary_state = true  },
  { .name = "Montana"                                , .status = "State"                       , .abbr = "MT" , .abbr_gpo = "Mont."   , .primary_state = true  },
  { .name = "Nebraska"                               , .status = "State"                       , .abbr = "NB" , .abbr_gpo = "Nebr."   , .primary_state = true  },
  { .name = "Nevada"                                 , .status = "State"                       , .abbr = "NV" , .abbr_gpo = "Nev."    , .primary_state = true  },
  { .name = "New Hampshire"                          , .status = "State"                       , .abbr = "NH" , .abbr_gpo = "N.H."    , .primary_state = true  },
  { .name = "New Jersey"                             , .status = "State"                       , .abbr = "NJ" , .abbr_gpo = "N.J."    , .primary_state = true  },
  { .name = "New Mexico"                             , .status = "State"                       , .abbr = "NM" , .abbr_gpo = "N. Mex." , .primary_state = true  },
  { .name = "New York"                               , .status = "State"                       , .abbr = "NY" , .abbr_gpo = "N.Y."    , .primary_state = true  },
  { .name = "North Carolina"                         , .status = "State"                       , .abbr = "NC" , .abbr_gpo = "N.C."    , .primary_state = true  },
  { .name = "North Dakota"                           , .status = "State"                       , .abbr = "ND" , .abbr_gpo = "N. Dak." , .primary_state = true  },
  { .name = "Ohio"                                   , .status = "State"                       , .abbr = "OH" , .abbr_gpo = "Ohio"    , .primary_state = true  },
  { .name = "Oklahoma"                               , .status = "State"                       , .abbr = "OK" , .abbr_gpo = "Okla."   , .primary_state = true  },
  { .name = "Oregon"                                 , .status = "State"                       , .abbr = "OR" , .abbr_gpo = "Oreg."   , .primary_state = true  },
  { .name = "Pennsylvania"                           , .status = "State"                       , .abbr = "PA" , .abbr_gpo = "Pa."     , .primary_state = true  },
  { .name = "Rhode Island"                           , .status = "State"                       , .abbr = "RI" , .abbr_gpo = "R.I."    , .primary_state = true  },
  { .name = "South Carolina"                         , .status = "State"                       , .abbr = "SC" , .abbr_gpo = "S.C."    , .primary_state = true  },
  { .name = "South Dakota"                           , .status = "State"                       , .abbr = "SD" , .abbr_gpo = "S. Dak." , .primary_state = true  },
  { .name = "Tennessee"                              , .status = "State"                       , .abbr = "TN" , .abbr_gpo = "Tenn."   , .primary_state = true  },
  { .name = "Texas"                                  , .status = "State"                       , .abbr = "TX" , .abbr_gpo = "Tex."    , .primary_state = true  },
  { .name = "Utah"                                   , .status = "State"                       , .abbr = "UT" , .abbr_gpo = "Utah"    , .primary_state = true  },
  { .name = "Vermont"                                , .status = "State"                       , .abbr = "VT" , .abbr_gpo = "Vt."     , .primary_state = true  },
  { .name = "Virginia"                               , .status = "State"                       , .abbr = "VA" , .abbr_gpo = "Va."     , .primary_state = true  },
  { .name = "Washington"                             , .status = "State"                       , .abbr = "WN" , .abbr_gpo = "Wash."   , .primary_state = true  },
  { .name = "West Virginia"                          , .status = "State"                       , .abbr = "WV" , .abbr_gpo = "W. Va."  , .primary_state = true  },
  { .name = "Wisconsin"                              , .status = "State"                       , .abbr = "WS" , .abbr_gpo = "Wis."    , .primary_state = true  },
  { .name = "Wyoming"                                , .status = "State"                       , .abbr = "WY" , .abbr_gpo = "Wyo."    , .primary_state = true  },
  { .name = "American Samoa"                         , .status = "Insular area (Territory)"    , .abbr = "AS" , .abbr_gpo = "A.S."    , .primary_state = false },
  { .name = "Guam"                                   , .status = "Insular area (Territory)"    , .abbr = "GU" , .abbr_gpo = "Guam"    , .primary_state = false },
  { .name = "Northern Mariana Islands"               , .status = "Insular area (Commonwealth)" , .abbr = "CM" , .abbr_gpo = "M.P."    , .primary_state = false },
  { .name = "Puerto Rico"                            , .status = "Insular area (Commonwealth)" , .abbr = "PR" , .abbr_gpo = "P.R."    , .primary_state = false },
  { .name = "U.S. Virgin Islands"                    , .status = "Insular area (Territory)"    , .abbr = "VI" , .abbr_gpo = "V.I."    , .primary_state = false },
  { .name = "U.S. Minor Outlying Islands"            , .status = "Insular areas"               , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Baker Island"                           , .status = "Island"                      , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Howland Island"                         , .status = "Island"                      , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Jarvis Island"                          , .status = "Island"                      , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Johnston Atoll"                         , .status = "Atoll"                       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Kingman Reef"                           , .status = "Atoll"                       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Midway Islands"                         , .status = "Atoll"                       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Navassa Island"                         , .status = "Island"                      , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Palmyra Atoll"                          , .status = "Atoll"                       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Wake Island"                            , .status = "Atoll"                       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Marshall Islands"                       , .status = "Freely associated state"     , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Micronesia"                             , .status = "Freely associated state"     , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Palau"                                  , .status = "Freely associated state"     , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "U.S. Armed Forces – Americas"           , .status = "US military mail code"       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "U.S. Armed Forces – Europe"             , .status = "US military mail code"       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "U.S. Armed Forces – Pacific"            , .status = "US military mail code"       , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Northern Mariana Islands"               , .status = "Obsolete postal code"        , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Panama Canal Zone"                      , .status = "Obsolete postal code"        , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Philippine Islands"                     , .status = "Obsolete postal code"        , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false },
  { .name = "Trust Territory of the Pacific Islands" , .status = "Obsolete postal code"        , .abbr = NA   , .abbr_gpo = NA        , .primary_state = false }
};

const size_t us_states_count = sizeof(us_states) / sizeof(us_states[0]);

#endif // US_STATES_H
